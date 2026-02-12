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
$jsonFlags = 0;
if (defined('JSON_PRETTY_PRINT')) {
    $jsonFlags = JSON_PRETTY_PRINT;
}
file_put_contents($outFile, json_encode($merged, $jsonFlags));
