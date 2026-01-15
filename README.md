# タイトル ID: 0x86200

参加者:
- zkr
- SSSCFW
- やくるん

# 使い方

1. `test.c` を作成して以下の要領で記述する
```cpp
#include "types.h"

u32 DAT_00XXYYZZ; // <-- フェイクメモリ

#include "./Functions/005/0059e5b4.c" // テストしたい関数

int main() {

  FUN_0059e5b4( ... );  // 呼ぶ
  
}
```

2. コンパイル `./b.sh` <br>
ARMv6 バイナリにビルドされるので、qemu とかを使って実行してください。