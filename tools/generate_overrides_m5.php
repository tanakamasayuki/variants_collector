<?php
// PHP5-compatible generator for tools/overrides_m5.json from M5Unified sources.

$defaultHpp = 'https://raw.githubusercontent.com/m5stack/M5Unified/master/src/M5Unified.hpp';
$defaultCpp = 'https://raw.githubusercontent.com/m5stack/M5Unified/master/src/M5Unified.cpp';
$defaultOut = __DIR__ . '/overrides_m5.json';
$defaultBoards = 'https://raw.githubusercontent.com/m5stack/M5GFX/master/src/lgfx/boards.hpp';
$variantsHeader = dirname(__DIR__) . '/src/variants_collector.h';

$args = parse_args($argv);
$hppPath = isset($args['hpp']) ? $args['hpp'] : $defaultHpp;
$cppPath = isset($args['cpp']) ? $args['cpp'] : $defaultCpp;
$outPath = isset($args['out']) ? $args['out'] : $defaultOut;
$boardsPath = isset($args['boards']) ? $args['boards'] : $defaultBoards;

$hpp = load_text($hppPath);
$cpp = load_text($cppPath);

$pinInfo = parse_pin_name_enum($hpp);
$pinNames = $pinInfo['primary_names'];
$namesByValue = $pinInfo['names_by_value'];
if (count($pinNames) === 0) {
    fwrite(STDERR, "pin_name_t not found or empty\n");
    exit(1);
}

$tableDefs = array(
    array('name' => '_pin_table_i2c_ex_in', 'count' => 4),
    array('name' => '_pin_table_port_bc', 'count' => 4),
    array('name' => '_pin_table_port_de', 'count' => 4),
    array('name' => '_pin_table_spi_sd', 'count' => 4),
    array('name' => '_pin_table_other0', 'count' => 1),
    array('name' => '_pin_table_other1', 'count' => 1),
    array('name' => '_pin_table_mbus', 'count' => 30),
);

$tables = array();
foreach ($tableDefs as $def) {
    $tables[$def['name']] = parse_pin_table($cpp, $def['name'], $def['count']);
}

$boards = parse_boards_list($boardsPath);
if (count($boards) === 0) {
    $boards = collect_boards($tables);
}
$fqbnMap = build_fqbn_map($variantsHeader);

$overrides = array();
foreach ($boards as $board) {
    $fqbn = map_board_to_fqbn($board, $fqbnMap);
    if ($fqbn === null) {
        continue;
    }
    $values = build_board_values($board, $tables, $tableDefs);
    if (count($values) !== count($pinNames)) {
        fwrite(STDERR, "pin count mismatch for $board\n");
        continue;
    }
    $pins = array();
    foreach ($values as $idx => $value) {
        if ($value === null || $value === 255 || (is_int($value) && $value < 0)) {
            continue;
        }
        if (isset($namesByValue[$idx]) && is_array($namesByValue[$idx])) {
            foreach ($namesByValue[$idx] as $name) {
                $pins[$name] = $value;
            }
        } else {
            $pins[$pinNames[$idx]] = $value;
        }
    }
    if (count($pins) === 0) {
        continue;
    }
    $overrides[$fqbn] = array('pins' => $pins);
}

$jsonFlags = 0;
if (defined('JSON_PRETTY_PRINT')) {
    $jsonFlags = JSON_PRETTY_PRINT;
}
file_put_contents($outPath, json_encode($overrides, $jsonFlags));
echo "Wrote: " . $outPath . "\n";

function parse_args($argv) {
    $out = array();
    foreach ($argv as $i => $arg) {
        if ($i === 0) { continue; }
        if (strpos($arg, '--') !== 0) { continue; }
        $eq = strpos($arg, '=');
        if ($eq === false) {
            $key = substr($arg, 2);
            $out[$key] = true;
        } else {
            $key = substr($arg, 2, $eq - 2);
            $val = substr($arg, $eq + 1);
            $out[$key] = $val;
        }
    }
    return $out;
}

function load_text($path) {
    if (preg_match('/^https?:\\/\\//', $path)) {
        $ctx = stream_context_create(array(
            'http' => array(
                'timeout' => 30,
                'user_agent' => 'variants_collector/1.0',
            ),
        ));
        $data = @file_get_contents($path, false, $ctx);
        if ($data === false) {
            fwrite(STDERR, "Failed to download: $path\n");
            exit(1);
        }
        return $data;
    }
    $data = @file_get_contents($path);
    if ($data === false) {
        fwrite(STDERR, "Failed to read: $path\n");
        exit(1);
    }
    return $data;
}

function strip_comments($s) {
    $s = preg_replace('!/\\*.*?\\*/!s', '', $s);
    $s = preg_replace('!//.*$!m', '', $s);
    return $s;
}

function parse_pin_name_enum($hpp) {
    if (!preg_match('/enum\\s+pin_name_t\\s*\\{(.*?)\\};/s', $hpp, $m)) {
        return array('primary_names' => array(), 'names_by_value' => array());
    }
    $body = strip_comments($m[1]);
    $items = explode(',', $body);
    $valueMap = array();
    $nameByValue = array();
    $namesByValue = array();
    $nextVal = 0;
    foreach ($items as $raw) {
        $item = trim($raw);
        if ($item === '') { continue; }
        if (preg_match('/^pin_name_max\\b/', $item)) { break; }
        $name = $item;
        $value = null;
        if (strpos($item, '=') !== false) {
            $parts = explode('=', $item, 2);
            $name = trim($parts[0]);
            $rhs = trim($parts[1]);
            if (isset($valueMap[$rhs])) {
                $value = $valueMap[$rhs];
            } else {
                $value = parse_int_literal($rhs);
            }
        }
        if ($value === null) {
            $value = $nextVal;
        }
        $valueMap[$name] = $value;
        if (!isset($nameByValue[$value])) {
            $nameByValue[$value] = $name;
        }
        if (!isset($namesByValue[$value])) {
            $namesByValue[$value] = array();
        }
        $namesByValue[$value][] = $name;
        $nextVal = $value + 1;
    }
    ksort($nameByValue);
    $primary = array_values($nameByValue);
    return array('primary_names' => $primary, 'names_by_value' => $namesByValue);
}

function parse_pin_table($cpp, $tableName, $expectedCount) {
    $re = '/static\\s+constexpr\\s+const\\s+uint8_t\\s+' . preg_quote($tableName, '/') . '\\s*(?:\\[[^\\]]*\\]\\s*)+=\\s*\\{(.*?)\\};/s';
    if (!preg_match($re, $cpp, $m)) {
        fwrite(STDERR, "Table not found: $tableName\n");
        return array();
    }
    $body = $m[1];
    $rows = array();
    if (preg_match_all('/\\{([^{}]*board_t::board_[^{}]*)\\}/s', $body, $mm)) {
        foreach ($mm[1] as $rowText) {
            $rowText = strip_comments($rowText);
            $parts = array();
            foreach (explode(',', $rowText) as $p) {
                $t = trim($p);
                if ($t === '') { continue; }
                $parts[] = $t;
            }
            $board = null;
            $values = array();
            foreach ($parts as $p) {
                if ($board === null && preg_match('/board_t::(board_[A-Za-z0-9_]+)/', $p, $bm)) {
                    $board = $bm[1];
                    continue;
                }
                if ($board !== null) {
                    $values[] = parse_pin_value($p);
                }
            }
            if ($board === null) { continue; }
            if (count($values) !== $expectedCount) {
                fwrite(STDERR, "Skipping $tableName $board: expected $expectedCount values, got " . count($values) . "\n");
                continue;
            }
            $rows[$board] = $values;
        }
    }
    return $rows;
}

function parse_pin_value($token) {
    $token = trim($token);
    if ($token === '') { return null; }
    if (preg_match('/GPIO_NUM_([0-9]+)/', $token, $m)) {
        return intval($m[1]);
    }
    $val = parse_int_literal($token);
    if ($val === 255) {
        return -1;
    }
    return $val;
}

function parse_int_literal($s) {
    $s = trim($s);
    if ($s === '') { return null; }
    if (preg_match('/^0x[0-9a-fA-F]+$/', $s)) {
        return hexdec(substr($s, 2));
    }
    if (preg_match('/^-?\\d+$/', $s)) {
        return intval($s);
    }
    return null;
}

function parse_boards_list($path) {
    if ($path === '') {
        return array();
    }
    $data = load_text($path);
    if ($data === false || $data === '') {
        return array();
    }
    if (!preg_match('/enum\\s+board_t\\s*\\{(.*?)\\};/s', $data, $m)) {
        return array();
    }
    $body = strip_comments($m[1]);
    $items = explode(',', $body);
    $out = array();
    $seen = array();
    foreach ($items as $raw) {
        $item = trim($raw);
        if ($item === '') { continue; }
        // remove attributes
        $item = preg_replace('/__attribute__\\s*\\(\\([^)]*\\)\\)/', '', $item);
        $item = trim($item);
        if ($item === '') { continue; }
        if (strpos($item, 'board_') !== 0) { continue; }
        $name = $item;
        if (strpos($item, '=') !== false) {
            $parts = explode('=', $item, 2);
            $name = trim($parts[0]);
        }
        if ($name === 'board_unknown') { continue; }
        if (!isset($seen[$name])) {
            $seen[$name] = true;
            $out[] = $name;
        }
    }
    return $out;
}

function collect_boards($tables) {
    $set = array();
    foreach ($tables as $t) {
        foreach ($t as $board => $values) {
            if ($board === 'board_unknown') { continue; }
            $set[$board] = true;
        }
    }
    return array_keys($set);
}

function build_board_values($board, $tables, $tableDefs) {
    $values = array();
    foreach ($tableDefs as $def) {
        $name = $def['name'];
        $table = isset($tables[$name]) ? $tables[$name] : array();
        if (isset($table[$board])) {
            $values = array_merge($values, $table[$board]);
        } elseif (isset($table['board_unknown'])) {
            $values = array_merge($values, $table['board_unknown']);
        } else {
            for ($i = 0; $i < $def['count']; $i++) {
                $values[] = 255;
            }
        }
    }
    return $values;
}

function build_fqbn_map($variantsHeader) {
    $data = @file_get_contents($variantsHeader);
    if ($data === false) {
        fwrite(STDERR, "Failed to read: $variantsHeader\n");
        exit(1);
    }
    $fqbnMap = array();
    if (preg_match_all('/fqbn\\s*=\\s*\"(m5stack:esp32:[^\"]+)\"/', $data, $m)) {
        foreach ($m[1] as $fqbn) {
            $parts = explode(':', $fqbn);
            $boardId = end($parts);
            $norm = normalize_id($boardId);
            if (!isset($fqbnMap[$norm])) {
                $fqbnMap[$norm] = array();
            }
            $fqbnMap[$norm][] = $fqbn;
        }
    }
    return $fqbnMap;
}

function normalize_id($s) {
    $s = strtolower($s);
    $s = preg_replace('/[^a-z0-9]+/', '', $s);
    return $s;
}

function map_board_to_fqbn($board, $fqbnMap) {
    $manual = array(
        // Explicit mappings when M5Unified board names differ from Arduino board IDs.
        'board_M5Stack' => 'm5stack_core',
        'board_M5StackCoreS3SE' => 'm5stack_cores3',
        'board_M5CardputerADV' => 'm5stack_cardputer',
        'board_M5StampPLC' => 'm5stack_stamplc',
        'board_M5AtomLite' => 'm5stack_atom',
        'board_M5AtomMatrix' => 'm5stack_atom',
        'board_M5AtomEcho' => 'm5stack_atom',
        'board_M5AtomU' => 'm5stack_atom',
        'board_M5AtomPsram' => 'm5stack_atom',
    );
    if (isset($manual[$board])) {
        $norm = normalize_id($manual[$board]);
        if (isset($fqbnMap[$norm]) && count($fqbnMap[$norm]) === 1) {
            return $fqbnMap[$norm][0];
        }
    }
    $base = preg_replace('/^board_/', '', $board);
    $norm = normalize_id($base);
    $cands = array($norm);
    if (strpos($norm, 'm5stack') !== 0 && strpos($norm, 'm5') === 0) {
        $cands[] = 'm5stack' . substr($norm, 2);
    }
    if (strpos($norm, 'm5stack') === 0) {
        $cands[] = substr($norm, 7);
    }

    foreach ($cands as $c) {
        if (isset($fqbnMap[$c])) {
            $list = $fqbnMap[$c];
            if (count($list) === 1) {
                return $list[0];
            }
        }
    }
    fwrite(STDERR, "Unmapped board: $board\n");
    return null;
}
