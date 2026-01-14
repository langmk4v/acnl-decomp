
/* WARNING: Unable to use type for symbol puVar1 */

undefined4
FUN_0059e5b4(undefined4 DropType,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined1 param_5,undefined1 param_6,byte param_7,byte param_8,byte param_9,
            byte param_10,char param_11)
{
  uint auStack_50 [7];
  undefined4 local_34;
  undefined2 *puStack_30;
  undefined2 *local_2c;
  undefined2 *local_28;
  undefined2 *puVar1;
  
  puVar1 = DAT_0059e738;
  local_34 = dropType;
  puStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;

  FUN_002fc878(DAT_0059e738,param_2);
  FUN_002fc878(puVar1 + 2,local_2c);
  FUN_002fc878(puVar1 + 4,local_28);

  *(undefined1 *)(puVar1 + 6) = param_5;
  *(undefined1 *)((int)puVar1 + 0xd) = param_6;
  *(undefined1 *)((int)puVar1 + 0xf) = 1;
  *(char *)(puVar1 + 7) = (char)local_34;

  *(byte *)((int)puVar1 + 0x11) =
    (param_10 & 1) << 5 | (param_9 & 7) << 2
      | (param_8 & 1) << 1 | param_7 & 1 | param_11 << 6;

  if (*(char *)(puVar1 + 7) == '\x10') {
    *(undefined1 *)((int)puVar1 + 0xf) = 2;
  }
  else {
    FUN_0059fa6c((undefined2 *)auStack_50);
    FUN_0059ebe8((undefined2 *)auStack_50,puVar1,0);
    FUN_002fc8bc();
    FUN_0059e8f8(auStack_50);
  }
  return 0;
}