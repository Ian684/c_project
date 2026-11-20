/* 8 位元符號擴展: 以算術表示避免實作定義轉型 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int extend(unsigned x) {
  x &= 255;
  return x & 128 ? (int)x - 256 : (int)x;
}
int main(void) {
  assert(extend(0) == 0 && extend(127) == 127 && extend(128) == -128 &&
         extend(255) == -1);
  printf("%d\n", extend(0xfe));
  return 0;
}
