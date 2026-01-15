#pragma once

#include "005/0059f830.c"

void FUN_0059e8f8(uint *param_1)
{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = (uint)*(byte *)((int)param_1 + 0xd);
  switch((uVar6 << 0x1a) >> 0x1c) {
  case 0:
    iVar7 = FUN_0059f830((int)param_1);
    if ((iVar7 == 0) ||
       (iVar7 = FUN_0059faf4((uint)*(byte *)((int)param_1 + 0x13),(uint)(byte)param_1[5],
                             (uint)*(byte *)((int)param_1 + 0x12)), iVar7 != -1)) {
      *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0xc3 | 8;
      bVar5 = FUN_002fc8bc();
      if (bVar5) {
        bVar3 = FUN_00305f6c();
        bVar4 = (byte)param_1[3];
        if (bVar3 == (bVar4 & 3)) goto LAB_0059ee38;
        goto LAB_0059ee1c;
      }
      goto LAB_0059ee38;
    }
    uVar8 = (uint)*(byte *)((int)param_1 + 0x12);
    uVar6 = (uint)(byte)param_1[5];
    iVar7 = FUN_0059fcfc((byte)param_1[3] >> 2,*(undefined1 *)((int)param_1 + 0x13),(byte)param_1[5]
                         ,*(byte *)((int)param_1 + 0x12),1);
    if (iVar7 == -1) {
      *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0xc3 | 8;
      bVar5 = FUN_002fc8bc();
      if (bVar5) {
        bVar3 = FUN_00305f6c();
        bVar4 = (byte)param_1[3];
        if (bVar3 != (bVar4 & 3)) goto LAB_0059ee1c;
      }
      goto LAB_0059ee38;
    }
    bVar4 = (byte)param_1[3] >> 2;
    if (bVar4 == 8) {
LAB_0059ed9c:
      uVar1 = ((uint)*(byte *)((int)param_1 + 0xe) << 0x1b) >> 0x1d;
      if (uVar1 != 1) {
        if (uVar1 == 2) goto code_r0x0059edd8;
        if (uVar1 != 4) goto LAB_0059eddc;
      }
      FUN_0059f3d8((ushort *)param_1,uVar1,uVar6,uVar8);
    }
    else if (bVar4 == 9) {
code_r0x0059edd8:
      FUN_0059ee44((ushort *)param_1);
    }
    else {
      if (bVar4 == 0xe) goto LAB_0059ed9c;
      if (bVar4 == 0xf) goto code_r0x0059edd8;
    }
LAB_0059eddc:
    FUN_0059e878((int)param_1);
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0xc3 | 4;
    bVar5 = FUN_002fc8bc();
    if (bVar5) {
      bVar3 = FUN_00305f6c();
      bVar4 = (byte)param_1[3];
      if (bVar3 != (bVar4 & 3)) {
LAB_0059ee1c:
        FUN_00623f80(0x3a,bVar4 & 3,param_1,0x16);
        return;
      }
    }
LAB_0059ee38:
    FUN_0059e8f8(param_1);
    return;
  case 1:
    *(undefined1 *)(DAT_0059eb34 + (uVar6 & 3) * 0x12 + 0xf) = 2;
    return;
  case 2:
    *(undefined1 *)(DAT_0059eb34 + (uVar6 & 3) * 0x12 + 0xf) = 3;
    return;
  case 3:
    FUN_005a16b0((byte)param_1[3] >> 2,(byte)param_1[3] & 3,(undefined2 *)param_1,
                 (undefined2 *)(param_1 + 1),(undefined2 *)(param_1 + 2),
                 (uint)*(byte *)((int)param_1 + 0x13),(uint)(byte)param_1[5],
                 (uint)*(byte *)((int)param_1 + 0x12),*(undefined1 *)((int)param_1 + 0xe),
                 (undefined1 *)((int)param_1 + 0xf));
    return;
  case 4:
    bVar4 = *(byte *)((int)param_1 + 0x12);
    bVar3 = (byte)param_1[5];
    bVar2 = *(byte *)((int)param_1 + 0x13);
    uVar6 = (byte)param_1[3] & 3;
    break;
  case 5:
  case 9:
    bVar4 = *(byte *)((int)param_1 + 0x12);
    bVar3 = (byte)param_1[5];
    bVar2 = *(byte *)((int)param_1 + 0x13);
    uVar6 = 4;
    break;
  case 6:
    iVar7 = FUN_0059faf4((uint)*(byte *)((int)param_1 + 0x13),(uint)(byte)param_1[5],
                         (uint)*(byte *)((int)param_1 + 0x12));
    if (iVar7 == -1) {
      return;
    }
    iVar7 = iVar7 * 5 + DAT_0059eb38;
    *(byte *)(iVar7 + 4) = (byte)param_1[3] >> 2;
    uVar6 = 1;
    *(undefined1 *)(iVar7 + 3) = 1;
    do {
      bVar5 = FUN_006244d0(uVar6 & 0xff);
      if (bVar5) {
        *(byte *)(iVar7 + 3) = *(byte *)(iVar7 + 3) | (byte)(1 << (uVar6 & 0xff));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    bVar4 = *(byte *)(iVar7 + 4);
    if (bVar4 != 0x17) {
      if (bVar4 < 0x18) {
        if ((bVar4 != 2 && bVar4 != 4) && (bVar4 != 5 && bVar4 != 0x15)) goto LAB_0059eacc;
      }
      else if ((bVar4 != 0x18 && bVar4 != 0x19) && bVar4 != 0x1a) goto LAB_0059eacc;
    }
    *(byte *)(iVar7 + 3) = *(byte *)(iVar7 + 3) | 0x10;
LAB_0059eacc:
    FUN_0059e878((int)param_1);
    return;
  case 7:
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0xc3 | 0xc;
    FUN_0059e8f8(param_1);
    FUN_00623f80(0x3a,4,param_1,0x16);
    return;
  case 8:
    FUN_0059fcfc((byte)param_1[3] >> 2,*(undefined1 *)((int)param_1 + 0x13),(char)param_1[5],
                 *(undefined1 *)((int)param_1 + 0x12),0);
    return;
  default:
    return;
  }
  iVar7 = FUN_0059faf4((uint)bVar2,(uint)bVar3,(uint)bVar4);
  if (iVar7 != -1) {
    iVar7 = iVar7 * 5 + DAT_0059fcf4;
    if (uVar6 == 4) {
      *(undefined1 *)(iVar7 + 3) = 0;
    }
    else {
      uVar6 = (uint)*(byte *)(iVar7 + 3) & ~(1 << uVar6 & 0xffU);
      *(char *)(iVar7 + 3) = (char)uVar6;
      if (uVar6 != 0) {
        return;
      }
    }
    bVar5 = FUN_002fc8bc();
    if (bVar5) {
      FUN_0030b82c();
      FUN_0059fa6c((undefined2 *)&stack0xffffffd0);
      FUN_00305f6c();
      FUN_002fc878((uint16_t *)&stack0xffffffd0,DAT_0059fcf8);
      FUN_002fc878((uint16_t *)&stack0xffffffd4,DAT_0059fcf8);
      FUN_002fc878((uint16_t *)&stack0xffffffd8,DAT_0059fcf8);
      FUN_00623f80(0x3a,4,(uint *)&stack0xffffffd0,0x16);
    }
    *(undefined1 *)(iVar7 + 2) = 0xa5;
  }
  return;
}