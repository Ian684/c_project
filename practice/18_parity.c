/* 奇偶檢查: XOR 累積 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned parity(uint32_t x) {
  unsigned p = 0;
  while (x) {
    p ^= x & 1u;
    x >>= 1;
  }
  return p;
}
int main(void) {
  assert(parity(0) == 0 && parity(7) == 1 && parity(15) == 0);
  puts("parity OK");
  return 0;
}
