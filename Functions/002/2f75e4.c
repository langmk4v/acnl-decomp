#pragma once

undefined4 FUN_002f75e4(uint param_1,int param_2)
{
  if ( (param_2 == 0xa5)
        || ((param_1 & ~(READU32(0x883828 + param_2 * 4))) != 0)
      )
    return 0;

  return 1;
}