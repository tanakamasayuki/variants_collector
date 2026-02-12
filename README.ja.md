# variants_collector

[English](README.md) | [日本語](README.ja.md)

`variants_collector` は、ボードメタデータとピン定義を `constexpr` として提供するヘッダオンリーの Arduino ライブラリです。

このライブラリは次のようなプロジェクト向けです。

- 同一のファームウェアバイナリを複数ボードで実行する
- 実行時にボードを判定する（例: M5Unified のようなワークフロー）
- 判定結果に応じて安全にボード定義を参照する

## 特長

- ヘッダオンリー（`src/variants_collector.h` のみ）
- 動的メモリ割り当てなし
- 実行時依存なし
- ボードマネージャのパッケージインデックスとプラットフォームアーカイブから生成

## インストール

### Arduino Library Manager

1. Arduino IDE を開く
2. `ツール > ライブラリを管理...` を開く
3. `variants_collector` を検索
4. インストール

### 手動インストール

1. このリポジトリを ZIP でダウンロード
2. Arduino IDE で `スケッチ > ライブラリをインクルード > .ZIP形式のライブラリをインストール...` を開く
3. ZIP を選択

## 使い方

```cpp
#include <variants_collector.h>

void setup() {
  Serial.begin(115200);

  // 実行時のボード判定後に、該当する定義を選択します。
  namespace Board = variants_collector::esp32::esp32::m5stack_atoms3;

  Serial.println(Board::Info::fqbn);
  Serial.println(Board::Info::name);
  Serial.println(Board::Info::build_mcu);
  Serial.println(Board::Pins::boot_btn);
}

void loop() {}
```

## ネームスペースのアクセス方法

### 1. フルパス指定

```cpp
#include <variants_collector.h>

void setup() {
  Serial.begin(115200);
  Serial.println(variants_collector::esp32::esp32::m5stack_atoms3::Info::fqbn);
  Serial.println(variants_collector::esp32::esp32::m5stack_atoms3::Pins::boot_btn);
}
```

### 2. ボードのネームスペースエイリアス（ローカルスコープ）

```cpp
#include <variants_collector.h>

void setup() {
  Serial.begin(115200);
  namespace Board = variants_collector::esp32::esp32::m5stack_atoms3;
  Serial.println(Board::Info::fqbn);
  Serial.println(Board::Pins::boot_btn);
}
```

### 3. ネームスペースのエイリアス（ローカルスコープ）

```cpp
#include <variants_collector.h>

void setup() {
  Serial.begin(115200);
  namespace vc = variants_collector::esp32::esp32;
  Serial.println(vc::m5stack_atoms3::Info::fqbn);
  Serial.println(vc::m5stack_atoms3::Pins::boot_btn);
}
```

### 4. 特定メンバーの型エイリアス（ローカルスコープ）

```cpp
#include <variants_collector.h>

void setup() {
  Serial.begin(115200);
  using BoardInfo = variants_collector::esp32::esp32::m5stack_atoms3::Info;
  using BoardPins = variants_collector::esp32::esp32::m5stack_atoms3::Pins;
  Serial.println(BoardInfo::fqbn);
  Serial.println(BoardPins::boot_btn);
}
```

### 5. using namespace（非推奨、ローカルスコープ）

```cpp
#include <variants_collector.h>

void setup() {
  Serial.begin(115200);
  using namespace variants_collector::esp32::esp32;
  Serial.println(m5stack_atoms3::Info::fqbn);
  Serial.println(m5stack_atoms3::Pins::boot_btn);
}
```

理由: `using namespace` は多数のボード名を一括で可視化するため、
他のライブラリや将来追加される定義と名前が衝突するリスクが高まります。
型エイリアスやネームスペースのエイリアスでスコープを絞る方法を推奨します。

## 実行時ボード判定の統合パターン

このライブラリはボード判定を行いません。
実行時の判定結果を使って、対応する `variants_collector` の名前空間にマッピングしてください。

1. 実行時に現在のボードを判定
2. `variants_collector` 内の該当する定義を選択
3. `Info` / `Pins` の定数を参照

`examples/RuntimeSelection/RuntimeSelection.ino` を参照してください。

## データ生成

ソースデータは `tools/` 内のスクリプトで生成します。

```bash
php tools/collect.php
php tools/merge.php
php tools/generate_header.php
```

既定のパッケージインデックスは `tools/config.php` に定義されています。

## ライセンス

MIT License. 詳細は `LICENSE` を参照してください。
