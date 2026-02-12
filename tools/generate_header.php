<?php
// PHP5-compatible header generator from out/merged.json

$config = require __DIR__ . '/config.php';
$ignoreNames = array();
if (isset($config['header_ignore_names']) && is_array($config['header_ignore_names'])) {
    foreach ($config['header_ignore_names'] as $n) {
        $ignoreNames[$n] = true;
        $ignoreNames[strtolower($n)] = true;
    }
}
$outDir = rtrim($config['output_dir'], '/\\');
$mergedPath = $outDir . '/merged.json';
if (!file_exists($mergedPath)) {
    fwrite(STDERR, "merged.json not found: $mergedPath\n");
    exit(1);
}

$data = json_decode(file_get_contents($mergedPath), true);
if (!is_array($data)) {
    fwrite(STDERR, "Invalid JSON: $mergedPath\n");
    exit(1);
}

$keys = array_keys($data);
sort($keys);

$h = array();
$h[] = '#pragma once';
$h[] = '#include <stdint.h>';
$h[] = '';
$h[] = 'namespace variants_collector';
$h[] = '{';

foreach ($keys as $fqbn) {
    $item = $data[$fqbn];
    if (!isset($item['platform']) || !isset($item['board']) || !isset($item['pins'])) {
        continue;
    }

    $pkg = isset($item['platform']['package_name']) ? $item['platform']['package_name'] : '';
    $arch = isset($item['platform']['architecture']) ? $item['platform']['architecture'] : '';
    $boardId = isset($item['board']['id']) ? $item['board']['id'] : '';

    $ns1 = ns_part($pkg);
    $ns2 = ns_part($arch);
    $ns3 = ns_part($boardId);

    $h[] = indent(1) . 'namespace ' . $ns1;
    $h[] = indent(1) . '{';
    $h[] = indent(2) . 'namespace ' . $ns2;
    $h[] = indent(2) . '{';
    $h[] = indent(3) . 'namespace ' . $ns3;
    $h[] = indent(3) . '{';
    $h[] = indent(4) . 'struct Info';
    $h[] = indent(4) . '{';
    $h[] = indent(5) . 'static inline constexpr const char *fqbn = "' . $fqbn . '";';
    $h[] = indent(5) . 'static inline constexpr const char *name = "' . addslashes($item['board']['name']) . '";';
    $h[] = indent(5) . 'static inline constexpr const char *build_mcu = "' . addslashes($item['board']['build_mcu']) . '";';
    $h[] = indent(4) . '};';
    $h[] = '';
    $h[] = indent(4) . 'struct Pins';
    $h[] = indent(4) . '{';

    $seen = array();
    $typeMap = array();
    $pins = $item['pins'];
    $pins = reorder_pins($pins);
    $valueMap = build_value_map($pins);
    foreach ($pins as $p) {
        if (!isset($p['name']) || !isset($p['type']) || !isset($p['value'])) {
            continue;
        }
        // Include defines as well
        $origName = $p['name'];
        if (!valid_ident($origName)) {
            continue;
        }
        if (strpos($origName, 'ATTRIBUTE_') === 0) {
            continue;
        }
        $type = $p['type'];
        $value = $p['value'];
        $name = rename_soc_pin_count($origName);
        $value = replace_soc_pin_count($value);
        $value = replace_identifiers($value, $valueMap);
        $value = try_evaluate_expression($value);
        if (isset($ignoreNames[$name]) || isset($ignoreNames[strtolower($name)])) {
            continue;
        }
        if (contains_ignored_token($value, $ignoreNames)) {
            continue;
        }
        $outName = normalize_output_name($name);
        if (isset($seen[$outName])) {
            continue;
        }
        if ($type === '') {
            $type = 'const char *';
        }
        $type = normalize_type($type);
        $type = widen_type_for_value($type, $value);
        // If this is a direct alias to an existing identifier, reuse its type.
        if (preg_match('/^[A-Za-z_][A-Za-z0-9_]*$/', trim($value))) {
            $ref = trim($value);
            if (isset($typeMap[$ref])) {
                $type = $typeMap[$ref];
            }
        }
        if (trim($value) === $name) {
            continue; // skip self-referential macros like #define X X
        }
        $h[] = indent(5) . 'static inline constexpr ' . type_and_name($type, $outName) . ' = ' . $value . ';';
        $seen[$outName] = true;
        $typeMap[$origName] = $type;
    }

    $h[] = indent(4) . '};';
    $h[] = indent(3) . '} // namespace ' . $ns3;
    $h[] = indent(2) . '} // namespace ' . $ns2;
    $h[] = indent(1) . '} // namespace ' . $ns1;
    $h[] = '';
}

$h[] = '} // namespace variants_collector';
$h[] = '';

file_put_contents(dirname(__DIR__) . '/src/variants_collector.h', implode("\n", $h));

function ns_part($s) {
    $s = strtolower($s);
    $s = preg_replace('/[^a-z0-9_]+/', '_', $s);
    if ($s === '' || preg_match('/^[0-9]/', $s)) {
        $s = '_' . $s;
    }
    return $s;
}

function valid_ident($s) {
    return preg_match('/^[A-Za-z_][A-Za-z0-9_]*$/', $s) === 1;
}

function normalize_type($type) {
    $t = trim($type);
    // Normalize const char pointer spacing: "const char *"
    if (preg_match('/^const\\s+char\\s*\\*\\s*$/', $t)) {
        return 'const char *';
    }
    return $t;
}

function widen_type_for_value($type, $value) {
    $t = trim($type);
    if ($t !== 'uint8_t') {
        return $t;
    }
    $v = trim((string)$value);
    if ($v === '') {
        return $t;
    }
    $info = parse_int_literal_safe($v);
    if ($info === null) {
        return $t;
    }
    if ($info['negative']) {
        return 'int';
    }
    if ($info['value'] > 0xFF) {
        return 'uint16_t';
    }
    return $t;
}

function parse_int_literal_safe($v) {
    if (!is_string($v)) {
        return null;
    }
    $s = trim($v);
    // Strip surrounding parentheses.
    while ($s !== '' && $s[0] === '(' && substr($s, -1) === ')') {
        $s = trim(substr($s, 1, -1));
    }
    if ($s === '') {
        return null;
    }
    if (!preg_match('/^-?\\d+$/', $s) && !preg_match('/^0x[0-9a-fA-F]+[uUlL]*$/', $s) && !preg_match('/^0b[01]+[uUlL]*$/', $s) && !preg_match('/^0[0-7]+[uUlL]*$/', $s)) {
        return null;
    }
    // Reuse parser logic from collect.php simplified here.
    $negative = false;
    if ($s[0] === '-') {
        $negative = true;
        $s = substr($s, 1);
    }
    $s = preg_replace('/[uUlL]+$/', '', $s);
    $base = 10;
    if (preg_match('/^0x/i', $s)) {
        $base = 16;
        $s = substr($s, 2);
    } elseif (preg_match('/^0b/i', $s)) {
        $base = 2;
        $s = substr($s, 2);
    } elseif (preg_match('/^0[0-7]+$/', $s) && $s !== '0') {
        $base = 8;
        $s = substr($s, 1);
    }
    $value = 0;
    $len = strlen($s);
    for ($i = 0; $i < $len; $i++) {
        $c = $s[$i];
        if ($base <= 10) {
            $digit = ord($c) - 48;
        } else {
            $digit = hexdec($c);
        }
        $value = $value * $base + $digit;
    }
    return array('value' => $value, 'negative' => $negative);
}

function try_evaluate_expression($value) {
    if (!is_string($value) || $value === '') {
        return $value;
    }
    // Do not touch strings.
    if (strpos($value, '"') !== false || strpos($value, "'") !== false) {
        return $value;
    }
    $expr = trim($value);
    if ($expr === '') {
        return $value;
    }
    // Allow only numbers, operators, and parentheses.
    if (!preg_match('/^[0-9a-fA-FxXbBuUlL\\s\\+\\-\\*\\/\\%\\(\\)\\<\\>\\&\\|\\^~]+$/', $expr)) {
        return $value;
    }
    // Bail out if any identifier-like token remains (e.g. A0).
    if (preg_match('/\\b[A-Za-z_][A-Za-z0-9_]*\\b/', $expr)) {
        return $value;
    }
    $expr = preg_replace_callback('/\\b(0x[0-9a-fA-F]+|0b[01]+|0[0-7]+|\\d+)[uUlL]*\\b/', function ($m) {
        return $m[1];
    }, $expr);
    // Evaluate safely after whitelist.
    $result = @eval('return ' . $expr . ';');
    if ($result === false || $result === null) {
        return $value;
    }
    if (is_int($result)) {
        return (string)$result;
    }
    if (is_float($result)) {
        return (string)intval($result);
    }
    return $value;
}

function indent($level) {
    return str_repeat('  ', $level);
}

function type_and_name($type, $name) {
    $t = rtrim($type);
    if (substr($t, -1) === '*') {
        return $t . $name;
    }
    return $t . ' ' . $name;
}

function normalize_output_name($name) {
    $out = strtolower($name);
    if (is_cpp_keyword($out)) {
        $out = $out . '_';
    }
    return $out;
}

function reorder_pins($pins) {
    $soc = array();
    $normal = array();
    $dependent = array();

    $i = 0;
    foreach ($pins as $p) {
        $p['_idx'] = $i;
        $i++;
        $name = isset($p['name']) ? $p['name'] : '';
        if ($name === 'SOC_GPIO_PIN_COUNT') {
            $soc[] = $p;
            continue;
        }
        if (is_dependent_value($p)) {
            $dependent[] = $p;
        } else {
            $normal[] = $p;
        }
    }

    return array_merge($soc, $normal, $dependent);
}

function is_dependent_value($p) {
    if (!isset($p['value'])) {
        return false;
    }
    $v = trim($p['value']);
    if ($v === '') {
        return false;
    }
    // Remove string literals to avoid false positives.
    $v = strip_string_literals($v);
    // If it contains an identifier token, treat as dependent.
    return preg_match('/\\b[A-Za-z_][A-Za-z0-9_]*\\b/', $v) === 1;
}

function strip_string_literals($s) {
    $out = '';
    $len = strlen($s);
    $in_single = false;
    $in_double = false;
    for ($i = 0; $i < $len; $i++) {
        $c = $s[$i];
        if ($c === '\"' && !$in_single) {
            $in_double = !$in_double;
            continue;
        }
        if ($c === "'" && !$in_double) {
            $in_single = !$in_single;
            continue;
        }
        if ($in_single || $in_double) {
            continue;
        }
        $out .= $c;
    }
    return $out;
}

function contains_ignored_token($value, $ignoreNames) {
    if (!is_string($value) || $value === '') {
        return false;
    }
    $v = strip_string_literals($value);
    foreach ($ignoreNames as $name => $_) {
        if (preg_match('/\\b' . preg_quote($name, '/') . '\\b/', $v)) {
            return true;
        }
    }
    return false;
}

function rename_soc_pin_count($name) {
    if ($name === 'SOC_GPIO_PIN_COUNT') {
        return 'PINS_SOC_GPIO_PIN_COUNT';
    }
    return $name;
}

function replace_soc_pin_count($value) {
    if (!is_string($value) || $value === '') {
        return $value;
    }
    return preg_replace('/\\bSOC_GPIO_PIN_COUNT\\b/', 'PINS_SOC_GPIO_PIN_COUNT', $value);
}

function build_value_map($pins) {
    $map = array();
    // First pass: numeric literals from static_const and define
    foreach ($pins as $p) {
        if (!isset($p['name']) || !isset($p['value'])) {
            continue;
        }
        $name = $p['name'];
        $val = normalize_numeric_literal($p['value']);
        if ($val !== null) {
            $map[$name] = $val;
        }
    }
    // Resolve expressions/aliases iteratively when all identifiers are known.
    $changed = true;
    $guard = 0;
    while ($changed && $guard < 5) {
        $changed = false;
        $guard++;
        foreach ($pins as $p) {
            if (!isset($p['name']) || !isset($p['value'])) {
                continue;
            }
            $name = $p['name'];
            if (isset($map[$name])) {
                continue;
            }
            $resolved = replace_identifiers($p['value'], $map);
            if (has_unresolved_identifiers($resolved, $map)) {
                continue;
            }
            $map[$name] = $resolved;
            $changed = true;
        }
    }
    // Mirror SOC_GPIO_PIN_COUNT as PINS_SOC_GPIO_PIN_COUNT for later replacements.
    if (isset($map['SOC_GPIO_PIN_COUNT'])) {
        $map['PINS_SOC_GPIO_PIN_COUNT'] = $map['SOC_GPIO_PIN_COUNT'];
    }
    return $map;
}

function normalize_numeric_literal($value) {
    if (!is_string($value)) {
        return null;
    }
    $v = trim($value);
    // Strip surrounding parentheses.
    while ($v !== '' && $v[0] === '(' && substr($v, -1) === ')') {
        $v = trim(substr($v, 1, -1));
    }
    if (preg_match('/^-?\\d+$/', $v)) {
        return $v;
    }
    if (preg_match('/^0x[0-9a-fA-F]+[uUlL]*$/', $v)) {
        return $v;
    }
    if (preg_match('/^0b[01]+[uUlL]*$/', $v)) {
        return $v;
    }
    if (preg_match('/^0[0-7]+[uUlL]*$/', $v)) {
        return $v;
    }
    return null;
}

function normalize_identifier($value) {
    if (!is_string($value)) {
        return null;
    }
    $v = trim($value);
    while ($v !== '' && $v[0] === '(' && substr($v, -1) === ')') {
        $v = trim(substr($v, 1, -1));
    }
    if (preg_match('/^[A-Za-z_][A-Za-z0-9_]*$/', $v)) {
        return $v;
    }
    return null;
}

function replace_identifiers($value, $valueMap) {
    if (!is_string($value) || $value === '') {
        return $value;
    }
    $out = '';
    $len = strlen($value);
    $in_single = false;
    $in_double = false;
    $buf = '';
    for ($i = 0; $i < $len; $i++) {
        $c = $value[$i];
        if ($c === '\"' && !$in_single) {
            if ($buf !== '') {
                $out .= replace_identifiers_in_segment($buf, $valueMap);
                $buf = '';
            }
            $in_double = !$in_double;
            $out .= $c;
            continue;
        }
        if ($c === "'" && !$in_double) {
            if ($buf !== '') {
                $out .= replace_identifiers_in_segment($buf, $valueMap);
                $buf = '';
            }
            $in_single = !$in_single;
            $out .= $c;
            continue;
        }
        if ($in_single || $in_double) {
            $out .= $c;
            continue;
        }
        $buf .= $c;
    }
    if ($buf !== '') {
        $out .= replace_identifiers_in_segment($buf, $valueMap);
    }
    return $out;
}

function replace_identifiers_in_segment($seg, $valueMap) {
    return preg_replace_callback('/\\b[A-Za-z_][A-Za-z0-9_]*\\b/', function ($m) use ($valueMap) {
        $k = $m[0];
        if (isset($valueMap[$k])) {
            return format_replacement($valueMap[$k]);
        }
        if ($k === 'HIGH') {
            return '1';
        }
        if ($k === 'LOW') {
            return '0';
        }
        return $k;
    }, $seg);
}

function is_cpp_keyword($name) {
    static $keywords = null;
    if ($keywords === null) {
        $keywords = array(
            'alignas','alignof','and','and_eq','asm','auto','bitand','bitor','bool','break','case',
            'catch','char','char16_t','char32_t','class','compl','const','constexpr','const_cast',
            'continue','decltype','default','delete','do','double','dynamic_cast','else','enum',
            'explicit','export','extern','false','float','for','friend','goto','if','inline','int',
            'long','mutable','namespace','new','noexcept','not','not_eq','nullptr','operator','or',
            'or_eq','private','protected','public','register','reinterpret_cast','return','short',
            'signed','sizeof','static','static_assert','static_cast','struct','switch','template',
            'this','thread_local','throw','true','try','typedef','typeid','typename','union','unsigned',
            'using','virtual','void','volatile','wchar_t','while','xor','xor_eq'
        );
    }
    return in_array($name, $keywords, true);
}

function format_replacement($value) {
    if (!is_string($value)) {
        return $value;
    }
    $v = trim($value);
    if ($v === '') {
        return $v;
    }
    // Simple literal: no need to wrap.
    if (preg_match('/^-?\\d+$/', $v) || preg_match('/^0x[0-9a-fA-F]+[uUlL]*$/', $v)) {
        return $v;
    }
    if (preg_match('/^0b[01]+[uUlL]*$/', $v) || preg_match('/^0[0-7]+[uUlL]*$/', $v)) {
        return $v;
    }
    if (preg_match('/^[A-Za-z_][A-Za-z0-9_]*$/', $v)) {
        return $v;
    }
    // Wrap expressions to preserve precedence.
    return '(' . $v . ')';
}

function has_unresolved_identifiers($value, $valueMap) {
    if (!is_string($value) || $value === '') {
        return false;
    }
    $v = strip_string_literals($value);
    if (!preg_match_all('/\\b[A-Za-z_][A-Za-z0-9_]*\\b/', $v, $m)) {
        return false;
    }
    foreach ($m[0] as $id) {
        if (!isset($valueMap[$id])) {
            // Allow C++ bool literals
            if ($id === 'true' || $id === 'false') {
                continue;
            }
            return true;
        }
    }
    return false;
}
