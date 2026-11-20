/* 位元組轉十六進位: 一 byte 對兩個 nibble */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void hex(const unsigned char *in, size_t n, char *out) {
  const char *d = "0123456789abcdef";
  for (size_t i = 0; i < n; i++) {
    out[2 * i] = d[in[i] >> 4];
    out[2 * i + 1] = d[in[i] & 15];
  }
  out[2 * n] = 0;
}
int main(void) {
  unsigned char a[] = {0, 15, 128, 255};
  char out[9];
  hex(a, 4, out);
  assert(strcmp(out, "000f80ff") == 0);
  hex(a, 0, out);
  assert(!*out);
  puts("hex encoding OK");
  return 0;
}
