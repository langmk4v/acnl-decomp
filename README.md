 ---

# Decomp of 0x86200 <br>

<br>
Contributers: <br>
- zkr<br>
- SSSCFW<br>
- やくるん<br>

 ---

Team discord server: <br>

[url](https://discord.gg/kB6YuTDSWW)

 ---

# 使い方

必要なもの:
- `QEMU`
```
$ sudo apt install qemu-arm-static
```

- `arm-linux-gnueabi-gcc`
```
$ sudo apt install arm-linux-gnueabi-gcc
```

## 1: `FAKE_MEMORY.bin` を作成する
このファイルをゲームのメモリとして読み書きされます。
実際のアドレスと対応しているので、プログラムを実行したあとにバイナリエディタで確認できます。
```
dd if=/dev/zero of=FAKE_MEMORY.bin bs=100MiB count=10
```

## 2: ダンプしたメモリを読み取る
CTRPF の Gateway RAM Dumper でメモリをダンプして、<br>
そのバイナリファイルを `BIN_LOADER` を使用してフェイクメモリに適用します。<br>
**ダンプされたメモリの先頭にある余分な領域に注意してください。**
```
# バイナリローダーをビルド
$ ./binloader-build.sh

# 読み取る (サイズに 0 を指定するとファイル全体をロード)
$ ./BINLOADER <ダンプしたバイナリ> <読み込む位置> <サイズ> <書き込むアドレス>
```

少なくとも ROM の部分 (0x100000 - 0x839000) は必ず適用しておいてください。
```
$ ./BINLOADER rom.bin 0x14 0 0x100000
```

## 3: `TEST.c` を編集する
使いたい関数の `#include` と 関数 `YourCode()` 内だけ書き換えれば OK

## 4: コンパイル <br>
アーキテクチャは 3DS と同じになっています。（なってるはず。多分。）
```
python3 build.py TEST.c
```

## 5: 実行
```
./run.sh
```

 ---

# Todo:


 ---


# 関数の追加
 
ファイル名 = `(6 桁のアドレス).c` <br>

ファイルの先頭に `#pragma once` を書くようにしてください。<br>

メモリの読み書き部分は全て `READxx(addr)` `WRITExx(addr)` に書き換えてください。<br>
( これにより FAKE_MEMORY.bin に対する読み書きになります ) <br>

