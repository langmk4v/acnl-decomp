#pragma once

#include "002/2fc19c.c"

void FUN_0059fa6c(u16 *param_1) {
  u32 iVar1;

  iVar1 = (u32)FUN_002fc19c((u16 *)param_1);
  iVar1 = (u32)FUN_002fc19c((u16 *)(iVar1 + 4));
  iVar1 = (u32)FUN_002fc19c((u16 *)(iVar1 + 4));

  WRITEU8(iVar1 + 4, 0);
  WRITEU8(iVar1 + 5, 0x28);
  WRITEU8(iVar1 + 6, 0);
  WRITEU8(iVar1 + 7, 0);
  WRITEU8(iVar1 + 8, 0);
  WRITEU8(iVar1 + 9, 0);
  WRITEU8(iVar1 + 10, 0xa5);
  WRITEU8(iVar1 + 11, 0);
  WRITEU8(iVar1 + 12, 0);

  return;
}