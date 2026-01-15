import os
import sys
import argparse

def run(cmd):
  print(cmd)
  return os.system(cmd)

parser = \
  argparse.ArgumentParser(description="test file builder - 2026 ringo")

parser.add_argument("SourceFile")

args = parser.parse_args()

CFLAGS  = \
  "-std=c11 -IFunctions -Iinclude " \
  + "-O0 -g " \
  + "-Wno-incompatible-pointer-types " \
  + "-fomit-frame-pointer -ffunction-sections -fno-strict-aliasing " \
  + "-march=armv6k -mtune=mpcore -mtp=soft"

LDFLAGS = \
  ""

CC = "arm-linux-gnueabi-gcc"

run(f"{CC} {CFLAGS} {LDFLAGS} {args.SourceFile} -o a.out")

