#pragma once

/*
u8 FUN_0075d7a4(int param_1) {
  undefined1 uVar1;
  u32 uVar2;
  bool bVar3;
  
  uVar2 = param_1 + 0x13200;
  bVar3 = *(char *)(param_1 + 0x132ac) != '\0';
  
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 0x132ae);
  }

  if (bVar3 && uVar2 != 0) {
    uVar1 = *(u8 *)(param_1 + 0x13268);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}*/

u8 FUN_0075d7a4(u32 addr) {
  u8    v1;
  u32   v2;
  bool  v3;

  v2 = addr + 0x13200;
  v3 = READU8(addr + 0x132ac) != 0;

  if (v3)
    v2 = (u32)( READU8(addr + 0x132ae) );

  if (v3 && (v2 != 0))
    v1 = READU8(addr + 0x13268);
  else
    v1 = 0;

  return v1;
}