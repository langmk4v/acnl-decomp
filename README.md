# TID: 0x86200

Contributers:
- zkr
- SSSCFW

# How to use?

1. Create `test.cpp` like this code:
```cpp
#include "types.h"

u32 DAT_00XXYYZZ; // <-- Fake of memory.

#include "./Functions/005/0059e5b4.c" // file to you want to test

int main() {

  FUN_0059e5b4( ... );  // Call any function
  
}
```

2. Compile and let's test rom-func !
