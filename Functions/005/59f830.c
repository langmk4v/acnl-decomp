#pragma once

#include "006/6a53dc.c"
#include "006/6f8954.c"

undefined4 FUN_0059f830(int param_1) {
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;

  if (*(byte *)(param_1 + 0x12) == 0xa5) {
    piVar2 = (int *)FUN_006a53dc();
  } else {
    uVar1 = FUN_006f8954((uint) * (byte *)(param_1 + 0x12));
    piVar2 = (int *)FUN_002fe9d4(uVar1);
  }
  iVar3 = FUN_002fee38(piVar2, (uint) * (byte *)(param_1 + 0x13),
                       (uint) * (byte *)(param_1 + 0x14),
                       (uint)((*(byte *)(param_1 + 0xe) & 1) != 0));
  uVar4 = 0;
  if (iVar3 != 0) {
    switch (*(byte *)(param_1 + 0xc) >> 2) {
      default:
        return 0;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
        uVar4 = 1;
    }
  }
  return uVar4;
}