#pragma once

u16* FUN_002fc19c(u16 *ptr) {
  WRITEU16((u32)ptr, 0x7ffe);
  WRITEU16((u32)(ptr + 1), 0);
  return ptr;
}