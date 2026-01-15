

// Copy u32 block with u16 pointer (?)

void FUN_002fc878(u16 *param_1, u16 *param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}
