<?php
// PHP5-compatible collector for Arduino variants pins_arduino.h

$config = require __DIR__ . '/config.php';

main($config);

function main($config) {
    ensure_dir($config['output_dir']);
    ensure_dir($config['work_dir']);

    foreach ($config['package_index_urls'] as $url) {
        $indexFile = download_to_work($config, $url, $config['work_dir']);
        $indexData = json_decode(file_get_contents($indexFile), true);
        if (!is_array($indexData)) {
            fail('Invalid JSON: ' . $indexFile);
        }

        $indexName = basename(parse_url($url, PHP_URL_PATH));
        $indexBase = preg_replace('/\.[^.]+$/', '', $indexName);
        $outDir = rtrim($config['output_dir'], '/\\') . '/' . $indexBase;
        ensure_dir($outDir);

        $platforms = select_latest_platforms($indexData);
        foreach ($platforms as $plat) {
            process_platform($config, $url, $outDir, $plat);
        }
    }
}

function select_latest_platforms($indexData) {
    if (!isset($indexData['packages']) || !is_array($indexData['packages'])) {
        return array();
    }
    $latest = array();
    foreach ($indexData['packages'] as $pkg) {
        if (!isset($pkg['platforms']) || !is_array($pkg['platforms'])) {
            continue;
        }
        foreach ($pkg['platforms'] as $plat) {
            $key = $pkg['name'] . '|' . $plat['name'] . '|' . $plat['architecture'];
            if (!isset($latest[$key])) {
                $latest[$key] = array('package' => $pkg, 'platform' => $plat);
                continue;
            }
            $cur = $latest[$key]['platform'];
            if (version_compare($plat['version'], $cur['version'], '>')) {
                $latest[$key] = array('package' => $pkg, 'platform' => $plat);
            }
        }
    }

    $list = array();
    foreach ($latest as $item) {
        $list[] = $item;
    }
    return $list;
}

function process_platform($config, $indexUrl, $outDir, $item) {
    $pkg = $item['package'];
    $plat = $item['platform'];

    $archiveUrl = $plat['url'];
    $archiveFile = download_to_work($config, $archiveUrl, $config['work_dir']);

    $extractDir = $config['work_dir'] . '/extract/' . safe_path($pkg['name']) . '/' . safe_path($plat['name']) . '/' . safe_path($plat['version']);
    if (file_exists($extractDir)) {
        rrmdir($extractDir);
    }
    ensure_dir($extractDir);

    extract_archive($archiveFile, $extractDir);

    $boardsPath = find_first_file($extractDir, 'boards.txt');
    if ($boardsPath === null) {
        // No boards.txt -> skip
        return;
    }
    $platformRoot = dirname($boardsPath);

    $boards = parse_boards_txt($boardsPath);
    if (count($boards) === 0) {
        return;
    }

    $variants = group_boards_by_variant($boards);
    foreach ($variants as $variant => $boardsForVariant) {
        $pinsPath = build_pins_path($platformRoot, $variant);
        if ($pinsPath === null || !file_exists($pinsPath)) {
            // Skip missing pins_arduino.h
            continue;
        }
        $pins = parse_pins_arduino($pinsPath);

        $gpioCount = resolve_gpio_count($config, $boardsForVariant);
        $pins = upsert_soc_gpio_pin_count($pins, $gpioCount);

        $json = array(
            'package_index_url' => $indexUrl,
            'platform' => array(
                'package_name' => $pkg['name'],
                'name' => $plat['name'],
                'architecture' => $plat['architecture'],
                'version' => $plat['version'],
                'archive_url' => $plat['url'],
            ),
            'variant' => $variant,
            'boards' => $boardsForVariant,
            'pins' => $pins,
        );

        $outFile = rtrim($outDir, '/\\') . '/' . $variant . '.json';
        $jsonFlags = 0;
        if (defined('JSON_PRETTY_PRINT')) {
            $jsonFlags = JSON_PRETTY_PRINT;
        }
        file_put_contents($outFile, json_encode($json, $jsonFlags));
    }
}

function parse_boards_txt($path) {
    $lines = file($path, FILE_IGNORE_NEW_LINES);
    if ($lines === false) {
        return array();
    }

    $boards = array();
    foreach ($lines as $line) {
        $line = trim($line);
        if ($line === '' || $line[0] === '#') {
            continue;
        }
        $pos = strpos($line, '=');
        if ($pos === false) {
            continue;
        }
        $key = substr($line, 0, $pos);
        $value = substr($line, $pos + 1);

        $dot = strpos($key, '.');
        if ($dot === false) {
            continue;
        }
        $boardId = substr($key, 0, $dot);
        $prop = substr($key, $dot + 1);

        if (!isset($boards[$boardId])) {
            $boards[$boardId] = array(
                'id' => $boardId,
                'name' => null,
                'build_mcu' => null,
                'build_variant' => null,
            );
        }

        if ($prop === 'name') {
            $boards[$boardId]['name'] = $value;
        } elseif ($prop === 'build.mcu') {
            $boards[$boardId]['build_mcu'] = $value;
        } elseif ($prop === 'build.variant') {
            $boards[$boardId]['build_variant'] = $value;
        }
    }

    // Normalize: keep only boards with required fields
    $result = array();
    foreach ($boards as $b) {
        if ($b['name'] !== null && $b['build_mcu'] !== null && $b['build_variant'] !== null) {
            $result[] = $b;
        }
    }
    return $result;
}

function group_boards_by_variant($boards) {
    $variants = array();
    foreach ($boards as $b) {
        $variant = $b['build_variant'];
        if (!isset($variants[$variant])) {
            $variants[$variant] = array();
        }
        $variants[$variant][] = array(
            'id' => $b['id'],
            'name' => $b['name'],
            'build_mcu' => $b['build_mcu'],
        );
    }
    return $variants;
}

function build_pins_path($platformRoot, $variant) {
    $variant = str_replace('\\', '/', $variant);
    $variant = trim($variant, '/');
    return $platformRoot . '/variants/' . $variant . '/pins_arduino.h';
}

function parse_pins_arduino($path) {
    $lines = file($path, FILE_IGNORE_NEW_LINES);
    if ($lines === false) {
        return array();
    }

    $lines = join_line_continuations($lines);

    $pins = array();
    foreach ($lines as $i => $line) {
        $raw = $line;
        $line = trim($line);
        if ($line === '' || $line[0] === '/' || $line[0] === '*') {
            continue;
        }

        // static const / static constexpr
        if (preg_match('/^static\s+(?:const\s+)?(?:constexpr\s+)?([A-Za-z_][A-Za-z0-9_:<>]*)\s+([A-Za-z_][A-Za-z0-9_]*)\s*=\s*([^;]+);/', $line, $m)) {
            $pins[] = array(
                'kind' => 'static_const',
                'name' => $m[2],
                'type' => $m[1],
                'value' => trim(strip_inline_comment($m[3])),
                'value_raw' => $m[3],
                'source' => basename($path) . ':' . ($i + 1),
            );
            continue;
        }

        // #define
        if (preg_match('/^#\s*define\s+([A-Za-z_][A-Za-z0-9_]*)\s+(.+)$/', $line, $m)) {
            // Skip function-like macros (e.g. #define FOO(x) ...)
            if (preg_match('/^#\s*define\s+[A-Za-z_][A-Za-z0-9_]*\(/', $raw)) {
                continue;
            }
            $value = trim(strip_inline_comment($m[2]));
            $force_bool = false;
            if ($value === '') {
                $value = 'true';
                $force_bool = true;
            }
            if ($value === '""' || $value === "''") {
                $value = 'true';
                $force_bool = true;
            }
            $pins[] = array(
                'kind' => 'define',
                'name' => $m[1],
                'type' => $force_bool ? 'bool' : infer_define_type($value),
                'value' => $value,
                'value_raw' => $m[2],
                'source' => basename($path) . ':' . ($i + 1),
            );
        }
    }

    return $pins;
}

function join_line_continuations($lines) {
    $out = array();
    $buf = '';
    foreach ($lines as $line) {
        $l = $line;
        $rtrim = rtrim($l);
        if ($rtrim !== '' && substr($rtrim, -1) === '\\') {
            $rtrim = substr($rtrim, 0, -1);
            $buf .= $rtrim;
            continue;
        }
        if ($buf !== '') {
            $buf .= $l;
            $out[] = $buf;
            $buf = '';
        } else {
            $out[] = $l;
        }
    }
    if ($buf !== '') {
        $out[] = $buf;
    }
    return $out;
}

function infer_define_type($value) {
    $v = trim($value);
    if ($v === '') {
        return 'bool';
    }
    if ($v === 'true' || $v === 'false') {
        return 'bool';
    }
    if (preg_match('/^".*"$/', $v) || preg_match("/^'.*'$/", $v)) {
        return 'const char *';
    }
    if (preg_match('/^-?\d+$/', $v) || preg_match('/^0x[0-9a-fA-F]+[uUlL]*$/', $v) || preg_match('/^0b[01]+[uUlL]*$/', $v) || preg_match('/^0[0-7]+[uUlL]*$/', $v)) {
        $info = parse_int_literal($v);
        if ($info['negative']) {
            if ($info['value'] === 1) {
                return 'int8_t';
            }
            return 'int';
        }
        return smallest_uint_type($info['value']);
    }
    return 'uint8_t';
}

function parse_int_literal($v) {
    $v = trim($v);
    $negative = false;
    if ($v !== '' && $v[0] === '-') {
        $negative = true;
        $v = substr($v, 1);
    }
    // Strip integer suffixes (U/u/L/l)
    $v = preg_replace('/[uUlL]+$/', '', $v);

    $base = 10;
    if (preg_match('/^0x/i', $v)) {
        $base = 16;
        $v = substr($v, 2);
    } elseif (preg_match('/^0b/i', $v)) {
        $base = 2;
        $v = substr($v, 2);
    } elseif (preg_match('/^0[0-7]+$/', $v) && $v !== '0') {
        $base = 8;
        $v = substr($v, 1);
    }

    $value = 0;
    $len = strlen($v);
    for ($i = 0; $i < $len; $i++) {
        $c = $v[$i];
        if ($base <= 10) {
            $digit = ord($c) - 48;
        } else {
            $digit = hexdec($c);
        }
        $value = $value * $base + $digit;
    }

    return array('value' => $value, 'negative' => $negative);
}

function smallest_uint_type($value) {
    if ($value <= 0xFF) {
        return 'uint8_t';
    }
    if ($value <= 0xFFFF) {
        return 'uint16_t';
    }
    if ($value <= 0xFFFFFFFF) {
        return 'uint32_t';
    }
    return 'uint64_t';
}

function resolve_gpio_count($config, $boardsForVariant) {
    $mcuSet = array();
    foreach ($boardsForVariant as $b) {
        $mcu = $b['build_mcu'];
        if (!isset($config['mcu_gpio_counts'][$mcu])) {
            fail('Missing mcu_gpio_counts mapping for build.mcu: ' . $mcu);
        }
        $mcuSet[$mcu] = $config['mcu_gpio_counts'][$mcu];
    }
    if (count($mcuSet) > 1) {
        // If multiple MCUs map to different values, stop to avoid ambiguity.
        $vals = array();
        foreach ($mcuSet as $mcu => $val) {
            $vals[] = $mcu . '=' . $val;
        }
        fail('Multiple build.mcu values for variant with different SOC_GPIO_PIN_COUNT: ' . implode(', ', $vals));
    }
    foreach ($mcuSet as $val) {
        return $val;
    }
    return null;
}

function upsert_soc_gpio_pin_count($pins, $gpioCount) {
    if ($gpioCount === null) {
        return $pins;
    }
    $updated = false;
    foreach ($pins as $i => $p) {
        if ($p['name'] === 'SOC_GPIO_PIN_COUNT') {
            $pins[$i]['kind'] = 'define';
            $pins[$i]['type'] = 'uint8_t';
            $pins[$i]['value'] = (string)$gpioCount;
            $pins[$i]['value_raw'] = (string)$gpioCount;
            $pins[$i]['source'] = 'mcu_map';
            $updated = true;
            break;
        }
    }
    if (!$updated) {
        $pins[] = array(
            'kind' => 'define',
            'name' => 'SOC_GPIO_PIN_COUNT',
            'type' => 'uint8_t',
            'value' => (string)$gpioCount,
            'value_raw' => (string)$gpioCount,
            'source' => 'mcu_map',
        );
    }
    return $pins;
}

function download_to_work($config, $url, $workDir) {
    $name = basename(parse_url($url, PHP_URL_PATH));
    $dest = rtrim($workDir, '/\\') . '/' . $name;
    if (file_exists($dest)) {
        return $dest;
    }

    $ctx = stream_context_create(array(
        'http' => array(
            'method' => 'GET',
            'timeout' => $config['http_timeout_sec'],
            'header' => 'User-Agent: ' . $config['http_user_agent'] . "\r\n",
        ),
        'https' => array(
            'method' => 'GET',
            'timeout' => $config['http_timeout_sec'],
            'header' => 'User-Agent: ' . $config['http_user_agent'] . "\r\n",
        ),
    ));

    $data = @file_get_contents($url, false, $ctx);
    if ($data === false) {
        fail('Download failed: ' . $url);
    }
    file_put_contents($dest, $data);
    return $dest;
}

function extract_archive($archiveFile, $extractDir) {
    $lower = strtolower($archiveFile);
    if (preg_match('/\.zip$/', $lower)) {
        if (class_exists('ZipArchive')) {
            $zip = new ZipArchive();
            $res = $zip->open($archiveFile);
            if ($res !== true) {
                fail('Failed to open zip: ' . $archiveFile);
            }
            $zip->extractTo($extractDir);
            $zip->close();
            return;
        }
        $cmd = 'unzip -q ' . escapeshellarg($archiveFile) . ' -d ' . escapeshellarg($extractDir);
        $ret = 0;
        system($cmd, $ret);
        if ($ret !== 0) {
            fail('unzip failed: ' . $archiveFile);
        }
        return;
    }

    // For tar.* use system tar for compatibility.
    if (preg_match('/\.(tar\.gz|tgz|tar\.bz2|tbz2|tar\.xz|txz)$/', $lower)) {
        $cmd = 'tar -xf ' . escapeshellarg($archiveFile) . ' -C ' . escapeshellarg($extractDir);
        $ret = 0;
        system($cmd, $ret);
        if ($ret !== 0) {
            fail('tar extract failed: ' . $archiveFile);
        }
        return;
    }

    fail('Unsupported archive type: ' . $archiveFile);
}

function find_first_file($dir, $filename) {
    $rii = new RecursiveIteratorIterator(new RecursiveDirectoryIterator($dir, FilesystemIterator::SKIP_DOTS));
    foreach ($rii as $file) {
        if (strcasecmp($file->getFilename(), $filename) === 0) {
            return $file->getPathname();
        }
    }
    return null;
}

function strip_inline_comment($text) {
    $out = '';
    $len = strlen($text);
    $in_single = false;
    $in_double = false;
    for ($i = 0; $i < $len; $i++) {
        $c = $text[$i];
        $next = ($i + 1 < $len) ? $text[$i + 1] : '';

        if (!$in_single && !$in_double) {
            if ($c === '/' && $next === '/') {
                break; // line comment
            }
            if ($c === '/' && $next === '*') {
                // skip block comment
                $i += 2;
                while ($i < $len) {
                    if ($text[$i] === '*' && ($i + 1 < $len) && $text[$i + 1] === '/') {
                        $i++;
                        break;
                    }
                    $i++;
                }
                continue;
            }
        }

        if ($c === '"' && !$in_single) {
            $in_double = !$in_double;
        } elseif ($c === "'" && !$in_double) {
            $in_single = !$in_single;
        }

        $out .= $c;
    }

    return trim($out);
}

function ensure_dir($dir) {
    if (!file_exists($dir)) {
        mkdir($dir, 0777, true);
    }
}

function rrmdir($dir) {
    if (!is_dir($dir)) {
        return;
    }
    $items = scandir($dir);
    foreach ($items as $item) {
        if ($item === '.' || $item === '..') {
            continue;
        }
        $path = $dir . '/' . $item;
        if (is_dir($path)) {
            rrmdir($path);
        } else {
            unlink($path);
        }
    }
    rmdir($dir);
}

function safe_path($s) {
    return preg_replace('/[^A-Za-z0-9._-]+/', '_', $s);
}

function fail($msg) {
    fwrite(STDERR, $msg . "\n");
    exit(1);
}
