#pragma once

#include "002/2f75cc.c"
#include "003/305f6c.c"

void FUN_0059ebe8(undefined2 *param_1, undefined2 *param_2,
                  byte param_3) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;

  bVar3 = FUN_00305f6c();

  *(byte *)(param_1 + 6) = bVar3 & 3 | *(byte *)(param_1 + 6) & 0xfc;
  bVar1 = *(byte *)((int)param_1 + 0xd);
  bVar2 = *(byte *)(param_2 + 8);
  *(byte *)((int)param_1 + 0xd) = bVar1 & 0xfc | bVar2 & 3;
  *(byte *)(param_1 + 6) = *(char *)(param_2 + 7) << 2 | bVar3 & 3;
  *(byte *)((int)param_1 + 0xd) =
      (param_3 & 0xf) << 2 | bVar1 & 0xc0 | bVar2 & 3;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)((int)param_2 + 0x11);
  *(undefined1 *)((int)param_1 + 0x13) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)((int)param_2 + 0xd);

  FUN_002fc878(param_1, param_2);
  FUN_002fc878(param_1 + 2, param_2 + 2);
  FUN_002fc878(param_1 + 4, param_2 + 4);

  uVar4 = FUN_002f75cc();
  *(undefined1 *)(param_1 + 9) = uVar4;

  return;
}