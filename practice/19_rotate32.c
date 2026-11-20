/* 32 位元循環移位: 避免右移 32 的未定義行為 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint32_t rol(uint32_t x, unsigned n) {
  n %= 32;
  return n ? (x << n) | (x >> (32 - n)) : x;
}
int main(void) {
  assert(rol(0x80000001u, 1) == 3u && rol(7, 0) == 7 && rol(7, 32) == 7);
  printf("%" PRIx32 "\n", rol(0x12345678u, 8));
  return 0;
}
