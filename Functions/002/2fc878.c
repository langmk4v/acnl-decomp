#pragma once

// Copy u32 block with u16 pointer (?)

void FUN_002fc878(u16 *dest, u16 *src)
{

  WRITEU16( (u32)dest, READU16((u32)src) );
  WRITEU16( (u32)(dest + 1), READU16((u32)(src + 1)) );

  // *param_1 = *param_2;
  // param_1[1] = param_2[1];

  return;
}
