 ---

TID: 0x86200 <br>
<br>
Contributers: <br>
- zkr
- SSSCFW
- やくるん

 ---

Team discord server: <br>

[url](https://discord.gg/kB6YuTDSWW)

 ---

# How to use

## Requirements:
- QEMU
```
$ sudo apt install qemu-arm-static
```

- arm-linux-gnueabi-gcc
```
$ sudo apt install arm-linux-gnueabi-gcc
```

## 1: `FAKE_MEMORY.bin` を作成する
このファイルをゲームのメモリとして読み書きされます。
実際のアドレスと対応しているので、バイナリエディタで確認できます。
```
dd if=/dev/zero of=FAKE_MEMORY.bin bs=100MiB count=10
```

## 2: `TEST.c` を編集する
使いたい関数の `#include` と 関数 `YourCode()` 内だけ書き換えれば OK

## 3: コンパイル <br>
アーキテクチャは 3DS と同じになっています。（なってるはず。多分。）
```
python3 build.py TEST.c
```

## 4: 実行
```
./run.sh
```

 ---

# Todo:


 ---


