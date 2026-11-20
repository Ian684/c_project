/* 矩陣轉置: 連續陣列索引換算 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void transpose(const int *a, size_t h, size_t w, int *out) {
  for (size_t r = 0; r < h; r++)
    for (size_t c = 0; c < w; c++)
      out[c * h + r] = a[r * w + c];
}
int main(void) {
  int a[] = {1, 2, 3, 4, 5, 6}, out[6], expected[] = {1, 4, 2, 5, 3, 6};
  transpose(a, 2, 3, out);
  assert(!memcmp(out, expected, sizeof out));
  transpose(a, 1, 6, out);
  assert(!memcmp(out, a, sizeof out));
  puts("transpose OK");
  return 0;
}
