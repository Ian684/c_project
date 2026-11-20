/* 大端序封包: 不依賴主機 byte order */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void put32(unsigned char *b, uint32_t x) {
  for (unsigned i = 0; i < 4; i++)
    b[i] = (unsigned char)(x >> (24 - 8 * i));
}
static uint32_t get32(const unsigned char *b) {
  uint32_t x = 0;
  for (int i = 0; i < 4; i++)
    x = (x << 8) | b[i];
  return x;
}
int main(void) {
  unsigned char b[4];
  put32(b, 0x12345678);
  assert(b[0] == 0x12 && b[3] == 0x78 && get32(b) == 0x12345678);
  put32(b, 0);
  assert(get32(b) == 0);
  puts("network byte order OK");
  return 0;
}
