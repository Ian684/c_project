/* 設定位元數: 每輪清除最低的 1 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned count(uint32_t x) {
  unsigned n = 0;
  while (x) {
    x &= x - 1;
    n++;
  }
  return n;
}
int main(void) {
  assert(count(0) == 0 && count(UINT32_MAX) == 32 && count(0x8081) == 3);
  printf("%u\n", count(255));
  return 0;
}
