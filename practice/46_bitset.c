/* 小型集合: 位元位置與範圍 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int contains(uint64_t set, unsigned x) {
  return x < 64 && (set & (UINT64_C(1) << x)) != 0;
}
int main(void) {
  uint64_t set = 0;
  set |= UINT64_C(1) << 3;
  set |= UINT64_C(1) << 63;
  assert(contains(set, 3) && contains(set, 63) && !contains(set, 64));
  set &= ~(UINT64_C(1) << 3);
  assert(!contains(set, 3));
  puts("bitset boundaries OK");
  return 0;
}
