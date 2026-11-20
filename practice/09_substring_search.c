/* 暴力字串搜尋: 最後一個可能起點 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int locate(const char *t, const char *p) {
  size_t n = strlen(t), m = strlen(p);
  if (m > n)
    return -1;
  for (size_t i = 0; i <= n - m; i++)
    if (!memcmp(t + i, p, m))
      return (int)i;
  return -1;
}
int main(void) {
  assert(locate("ababa", "aba") == 0 && locate("abc", "bc") == 1 &&
         locate("abc", "x") == -1 && locate("abc", "") == 0);
  puts("substring boundaries OK");
  return 0;
}
