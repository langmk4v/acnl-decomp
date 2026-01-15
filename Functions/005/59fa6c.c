#pragma once

#include "002/2fc19c.c"

void FUN_0059fa6c(undefined2 *param_1) {
  u32 iVar1;

  iVar1 = (u32)FUN_002fc19c((u16 *)param_1);
  iVar1 = (u32)FUN_002fc19c((u16 *)(iVar1 + 4));
  iVar1 = (u32)FUN_002fc19c((u16 *)(iVar1 + 4));

  *(undefined1 *)(iVar1 + 10) = 0xa5;
  *(undefined1 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 7) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
  *(undefined1 *)(iVar1 + 5) = 0x28;
  *(undefined1 *)(iVar1 + 6) = 0;

  return;
}
