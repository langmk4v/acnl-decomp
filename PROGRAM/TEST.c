#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "RAM_FAKE.h"

// ---------------------------------
//  Write your test program.
//

#include "005/59e5b4.c"

int YourCode() {

  u32 Item = 0x2117;

  FUN_0059e5b4(0xA, &Item, &Item, &Item, 0x20, 0x30, 0, 0, 0, 0, 0);

  return 0;
}

//
// ---------------------------------

int main() {
  if (!FakeRAM_Open()) {
    printf("Failed to open 'FAKE_MEMORY.bin'.\n");
    printf("\n");
    printf("Please create the file following this command:\n");
    printf("  $ dd if=/dev/null of=FAKE_MEMORY.bin bs=100MiB count=10\n");
    printf("\n");
    return -1;
  }

  int result = YourCode();

  FakeRAM_Flush();
  FakeRAM_Close();

  return result;
}