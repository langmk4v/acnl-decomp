import os

def run(cmd):
  print(cmd)
  return os.system(cmd)

CFLAGS  = \
  "-std=c11 -IFunctions -Iinclude " \
  + "-O0 -g " \
  + "-Wno-incompatible-pointer-types " \
  + "-fomit-frame-pointer -ffunction-sections -fno-strict-aliasing " \
  + "-march=armv6k -mtune=mpcore -mtp=soft"

LDFLAGS = \
  ""

CC = "arm-linux-gnueabi-gcc"

run(f"{CC} {CFLAGS} {LDFLAGS} PROGRAM/TEST.c -o a.out")

