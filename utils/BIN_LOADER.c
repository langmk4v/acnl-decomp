#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "./types.h"

int main(int argc, char** argv) {
  if (argc != 5) {
    printf(
      "使い方:\n"
      "  BIN_LOADER <読み取るファイル> <読み込む位置> <サイズ (バイト数)> <書き込む位置>\n"
      "\n"
      "ファイルから全ての内容を読み取るには、サイズに 0 を指定してください。\n"
    );
    return 0;
  }

  char const* Path = argv[1];
  u32 ReadOffset = strtol(argv[2], NULL, 16);
  u32 Size = strtol(argv[3], NULL, 16);
  u32 WriteOffset = strtol(argv[4], NULL, 16);
  
  FILE* fp = NULL;

  if (Size == 0) {
    fp = fopen(Path, "r");
    if (!fp) { printf("ファイルを開けません。\n"); return -1; }
    fseek(fp, 0, SEEK_END);
    Size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
  }

  printf(
    "\nファイル '%s' の 位置 0x%X から %d(hex=0x%X) バイトを読み取り、\n"
    "FAKE_MEMORY.bin 内の位置 0x%X に書き込みます。\n",
      Path, ReadOffset, Size, Size, WriteOffset);

  printf("\n続けますか？[Y/n]\n");

  char C = getchar();

  if (C != 'Y' && C != 'y') {
    printf("(^o^)\n");
    return 0;
  }

  u8* buffer = malloc(Size);

  if (!fp)
    fp = fopen(Path, "r");

  if (!fp) {
    printf("ファイルを開けません。\n");
    return -1;
  }

  if (fread(buffer, Size, 1, fp) != 1) {
    printf("読み取りに失敗しました。\n");
    return -1;
  }

  fclose(fp);

  fp = fopen("FAKE_MEMORY.bin", "rw+");

  fseek(fp, WriteOffset, SEEK_SET);

  if (fwrite(buffer, Size, 1, fp) != 1) {
    printf("書き込みに失敗しました。\n");
    fclose(fp);
    return -1;
  }

  printf("正常終了。\n");
  fclose(fp);

  return 0;
}