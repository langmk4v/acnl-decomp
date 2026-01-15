/* WARNING: Unable to use type for symbol puVar1 */

//
// PlaceItem
//

#include "002/2fc878.c"
#include "002/2fc8bc.c"
#include "005/59e8f8.c"
#include "005/59ebe8.c"
#include "005/59fa6c.c"

extern u32 DAT_0059e738;

int FUN_0059e5b4(u8 DropType, u32 *ItemPtr, u32 *ItemPtr2,
                 u32 *ItemPtr3, u32 param_5, u32 param_6, u8 param_7,
                 u8 param_8, u8 param_9, u8 param_10, char param_11) {
  u32 auStack_50[7];
  undefined4 local_34;
  undefined2 *puStack_30;
  undefined2 *local_2c;
  undefined2 *local_28;
  undefined2 *puVar1;

  puVar1 = (u32 *)DAT_0059e738;
  local_34 = DropType;
  puStack_30 = ItemPtr;
  local_2c = ItemPtr2;
  local_28 = ItemPtr3;

  FUN_002fc878((u16 *)DAT_0059e738, (u16 *)ItemPtr);
  FUN_002fc878((u16 *)(puVar1 + 2), (u16 *)local_2c);
  FUN_002fc878((u16 *)(puVar1 + 4), (u16 *)local_28);

  *(undefined1 *)(puVar1 + 6) = param_5;
  *(undefined1 *)((u32)puVar1 + 0xd) = param_6;
  *(undefined1 *)((u32)puVar1 + 0xf) = 1;
  *(char *)(puVar1 + 7) = (char)local_34;

  *(u8 *)((int)puVar1 + 0x11) =
      (param_10 & 1) << 5 | (param_9 & 7) << 2 | (param_8 & 1) << 1 |
      param_7 & 1 | param_11 << 6;

  if (*(char *)(puVar1 + 7) == '\x10') {
    *(undefined1 *)((int)puVar1 + 0xf) = 2;
  } else {
    FUN_0059fa6c((undefined2 *)auStack_50);
    FUN_0059ebe8((undefined2 *)auStack_50, puVar1, 0);
    FUN_002fc8bc();
    FUN_0059e8f8(auStack_50);
  }
  return 0;
}