<?php
// PHP5-compatible merger: combine per-variant JSON into fqbn-keyed JSON.

$config = require __DIR__ . '/config.php';

$root = rtrim($config['output_dir'], '/\\');
$merged = array();

$dirs = scandir($root);
foreach ($dirs as $dir) {
    if ($dir === '.' || $dir === '..') {
        continue;
    }
    $path = $root . '/' . $dir;
    if (!is_dir($path)) {
        continue;
    }

    $files = scandir($path);
    foreach ($files as $file) {
        if (substr($file, -5) !== '.json') {
            continue;
        }
        $full = $path . '/' . $file;
        $data = json_decode(file_get_contents($full), true);
        if (!is_array($data)) {
            continue;
        }

        if (!isset($data['platform']) || !isset($data['boards']) || !isset($data['pins'])) {
            continue;
        }

        $pkg = $data['platform']['package_name'];
        $arch = $data['platform']['architecture'];

        foreach ($data['boards'] as $b) {
            if (!isset($b['id'])) {
                continue;
            }
            $fqbn = $pkg . ':' . $arch . ':' . $b['id'];
            $merged[$fqbn] = array(
                'fqbn' => $fqbn,
                'board' => $b,
                'variant' => $data['variant'],
                'platform' => $data['platform'],
                'pins' => $data['pins'],
                'source' => $full,
            );
        }
    }
}

$outFile = $root . '/merged.json';
$merged = apply_overrides($merged, $config);
$jsonFlags = 0;
if (defined('JSON_PRETTY_PRINT')) {
    $jsonFlags = JSON_PRETTY_PRINT;
}
file_put_contents($outFile, json_encode($merged, $jsonFlags));

function apply_overrides($merged, $config) {
    $paths = array();
    if (isset($config['overrides_paths']) && is_array($config['overrides_paths'])) {
        $paths = $config['overrides_paths'];
    } elseif (isset($config['overrides_path'])) {
        $paths = array($config['overrides_path']);
    }

    foreach ($paths as $path) {
        if ($path === '' || !file_exists($path)) {
            continue;
        }
        $raw = file_get_contents($path);
        $data = json_decode($raw, true);
        if (!is_array($data)) {
            continue;
        }
        foreach ($data as $fqbn => $entry) {
            if (!isset($merged[$fqbn]) || !is_array($entry)) {
                continue;
            }
            $merged[$fqbn] = apply_override_entry($merged[$fqbn], $entry);
        }
    }

    return $merged;
}

function apply_override_entry($item, $entry) {
    $pins = get_section($entry, 'pins');
    if (is_array($pins)) {
        $item['pins'] = apply_pin_overrides($item['pins'], $pins);
    }

    $info = get_section($entry, 'info');
    if (is_array($info) && isset($item['board']) && is_array($item['board'])) {
        if (isset($info['name']) && is_string($info['name'])) {
            $item['board']['name'] = $info['name'];
        }
        if (isset($info['build_mcu']) && is_string($info['build_mcu'])) {
            $item['board']['build_mcu'] = $info['build_mcu'];
        }
    }

    return $item;
}

function get_section($entry, $name) {
    if (!is_array($entry)) {
        return null;
    }
    if (isset($entry[$name])) {
        return $entry[$name];
    }
    $upper = strtoupper($name);
    $title = ucfirst($name);
    if (isset($entry[$upper])) {
        return $entry[$upper];
    }
    if (isset($entry[$title])) {
        return $entry[$title];
    }
    return null;
}

function apply_pin_overrides($pins, $overrides) {
    if (!is_array($pins)) {
        $pins = array();
    }
    $index = array();
    foreach ($pins as $i => $p) {
        if (isset($p['name'])) {
            $index[$p['name']] = $i;
        }
    }
    foreach ($overrides as $name => $value) {
        $def = normalize_override_value($value);
        if ($def === null) {
            continue;
        }
        $def['name'] = $name;
        if (isset($index[$name])) {
            $pins[$index[$name]] = array_merge($pins[$index[$name]], $def);
        } else {
            $pins[] = $def;
        }
    }
    return $pins;
}

function normalize_override_value($value) {
    if (is_array($value)) {
        if (!isset($value['value'])) {
            return null;
        }
        $type = isset($value['type']) ? $value['type'] : guess_type($value['value']);
        return array(
            'type' => $type,
            'value' => $value['value'],
        );
    }
    return array(
        'type' => guess_type($value),
        'value' => $value,
    );
}

function guess_type($value) {
    if (is_bool($value)) {
        return 'bool';
    }
    if (is_int($value)) {
        if ($value >= 0 && $value <= 0xFF) {
            return 'uint8_t';
        }
        if ($value >= 0 && $value <= 0xFFFF) {
            return 'uint16_t';
        }
        return 'int';
    }
    if (is_float($value)) {
        return 'float';
    }
    return 'const char *';
}
