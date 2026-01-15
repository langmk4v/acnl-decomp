#pragma once

#include "002/2f75e4.c"

uint FUN_006f8954(uint param_1)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_002f75e4(0x20,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar2 = FUN_002f75e4(0x80,param_1);
  iVar1 = READU32(0x6f8a54);
  if (iVar2 == 0) {
    iVar2 = FUN_002f75e4(0x2000,param_1);
    if (iVar2 == 0) {
      if (param_1 == 0x68) {
        return 0x1e;
      }
      iVar2 = FUN_002f75e4(0x100000,param_1);
      if (iVar2 == 0) {
        iVar1 = FUN_002f75e4(0x80000,param_1);
        if (iVar1 != 0) {
          return 0x1f;
        }
      }
      else {
        uVar3 = 0x20;
        do {
          if (param_1 == *(byte *)(iVar1 + (uVar3 & 0xff))) {
            return uVar3 & 0xff;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x2a);
      }
    }
    else {
      uVar3 = 0x1a;
      do {
        if (param_1 == *(byte *)(iVar1 + (uVar3 & 0xff))) {
          return uVar3 & 0xff;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x1e);
    }
  }
  else {
    uVar3 = 2;
    do {
      if (param_1 == *(byte *)(READU32(0x6f8a54) + (uVar3 & 0xff))) {
        return uVar3 & 0xff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x1a);
  }
  return 0;
}