//
// PlaceItem
//

#include "002/2fc878.c"
#include "002/2fc8bc.c"
// #include "005/59e8f8.c"
// #include "005/59ebe8.c"
#include "005/59fa6c.c"

int FUN_0059e5b4(
    u8 DropType,
    u32 *pItemToReplace, u32 *pItemToPlace, u32 *pItemToShow,
    u32 wx, u32 wy,
    u8 p7, u8 p8, u8 p9, u8 p10, char p11)
{
  u32   Stack50[7] = { 0 };  // ?

  u32   local34 = DropType;

  u32*  pStack30 = pItemToReplace;
  u32*  local2c  = pItemToPlace;
  u32*  local28  = pItemToShow;
  
  u16*   pDropContext = (u16*)READU32(0x59e738);

  FUN_002fc878((u16*)READU32(0x59e738), (u16*)pItemToReplace);
  FUN_002fc878(pDropContext + 2, (u16*)local2c);
  FUN_002fc878(pDropContext + 4, (u16*)local28);

  WRITEU8((u32)(pDropContext + 6), wx);
  WRITEU8((u32)pDropContext + 0xD, wy);
  
  WRITEU8((u32)pDropContext + 0xF, 1);

  WRITEU8((u32)(pDropContext + 7), local34);

  WRITEU8((u32)pDropContext + 0x11,
    (p10 & 1) << 5 | (p9 & 7) << 2
    | (p8 & 1) << 1 | (p7 & 1) | (p11 << 6));

  if ((u8)(READU16((u32)(pDropContext + 7))) == 0x10) {
    WRITEU8((u32)pDropContext + 0xF, 2);
  }
  else {
    // TODO:

    FUN_0059fa6c((u16*)Stack50);
    FUN_0059ebe8((undefined2*)Stack50, pDropContext, 0);
    // FUN_002fc8bc();
    // FUN_0059e8f8(Stack50);
  }

  return 0;
}