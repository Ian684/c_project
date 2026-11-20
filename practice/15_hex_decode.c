/* 十六進位還原: 非法字元與奇數長度 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int nibble(char c) {
  if (c >= '0' && c <= '9')
    return c - '0';
  if (c >= 'a' && c <= 'f')
    return c - 'a' + 10;
  if (c >= 'A' && c <= 'F')
    return c - 'A' + 10;
  return -1;
}
static int decode(const char *s, unsigned char *out) {
  size_t n = strlen(s);
  if (n % 2)
    return 0;
  for (size_t i = 0; i < n; i += 2) {
    int a = nibble(s[i]), b = nibble(s[i + 1]);
    if (a < 0 || b < 0)
      return 0;
    out[i / 2] = (unsigned char)(a * 16 + b);
  }
  return 1;
}
int main(void) {
  unsigned char out[2];
  assert(decode("00fF", out) && out[0] == 0 && out[1] == 255);
  assert(!decode("0", out) && !decode("zz", out));
  puts("hex validation OK");
  return 0;
}
