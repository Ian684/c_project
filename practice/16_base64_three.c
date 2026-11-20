/* Base64 三位元組: 六位元分組 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void encode3(const unsigned char in[3], char out[5]) {
  const char *t =
      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  uint32_t v = ((uint32_t)in[0] << 16) | ((uint32_t)in[1] << 8) | in[2];
  for (int i = 0; i < 4; i++)
    out[i] = t[(v >> (18 - 6 * i)) & 63];
  out[4] = 0;
}
int main(void) {
  char out[5];
  unsigned char a[] = {77, 97, 110}, z[] = {0, 0, 0};
  encode3(a, out);
  assert(strcmp(out, "TWFu") == 0);
  encode3(z, out);
  assert(strcmp(out, "AAAA") == 0);
  puts(out);
  return 0;
}
