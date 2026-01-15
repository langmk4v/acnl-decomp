#pragma once

#include <stdio.h>

#include "types.h"

#define  FAKERAM_PATH  "FAKE_MEMORY.bin"

FILE*  _g_fakeram_bin_fp;

// FILE* FakeRAM_GetFP() {
//   return _g_fakeram_bin_fp;
// }

bool FakeRAM_Open() {
  return
    (_g_fakeram_bin_fp = fopen(FAKERAM_PATH, "rw+")) != NULL;
}

void FakeRAM_Flush() {
  fflush(_g_fakeram_bin_fp);
}

void FakeRAM_Close() {
  fclose(_g_fakeram_bin_fp);
}

#define  _WRITER_DEF_(NAME, TYPE, FMT) \
  TYPE NAME(u32 addr, TYPE value) { \
    fseek( _g_fakeram_bin_fp, addr, SEEK_SET ); \
    fwrite( &value, sizeof(TYPE), 1, _g_fakeram_bin_fp ); \
    printf("WRITE " #TYPE " (%X, " FMT ")\n", addr, value); \
    return value; \
  }

#define _READER_DEF_(NAME, TYPE) \
  TYPE NAME(u32 addr) { \
    fseek( _g_fakeram_bin_fp, addr, SEEK_SET ); \
    TYPE value; \
    fread( &value, sizeof(TYPE), 1, _g_fakeram_bin_fp ); \
    printf("READ " #TYPE " (%X)\n", addr); \
    return value; \
  }

_WRITER_DEF_(WRITEU8, u8, "%X");
_WRITER_DEF_(WRITEU16, u16, "%X");
_WRITER_DEF_(WRITEU32, u32, "%X");
_WRITER_DEF_(WRITEU64, u64, "%LX");

_READER_DEF_(READU8, u8);
_READER_DEF_(READU16, u16);
_READER_DEF_(READU32, u32);
_READER_DEF_(READU64, u64);

_WRITER_DEF_(WRITEFLOAT, float, "%f");
_READER_DEF_(READFLOAT, float);
