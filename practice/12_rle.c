/* 連續壓縮: 輸出容量與數字寬度 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int encode(const char *s, char *out, size_t cap) {
  size_t used = 0;
  for (size_t i = 0; s[i];) {
    size_t j = i + 1;
    while (s[j] == s[i])
      j++;
    int n = snprintf(out + used, cap - used, "%c%zu", s[i], j - i);
    if (n < 0 || (size_t)n >= cap - used)
      return 0;
    used += (size_t)n;
    i = j;
  }
  if (!cap)
    return 0;
  out[used] = 0;
  return 1;
}
int main(void) {
  char out[20];
  assert(encode("aaabbc", out, sizeof out) && strcmp(out, "a3b2c1") == 0);
  assert(!encode("aaaa", out, 2));
  assert(encode("", out, sizeof out) && out[0] == 0);
  puts("RLE capacity OK");
  return 0;
}
