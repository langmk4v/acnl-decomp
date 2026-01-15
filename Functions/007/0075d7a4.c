#pragma once

undefined1 FUN_0075d7a4(int param_1)
{
  undefined1 uVar1;
  u32 uVar2;
  bool bVar3;
  
  uVar2 = param_1 + 0x13200;
  bVar3 = *(char *)(param_1 + 0x132ac) != '\0';
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 0x132ae);
  }
  if (bVar3 && uVar2 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x13268);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}