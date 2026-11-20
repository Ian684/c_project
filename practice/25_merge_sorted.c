/* 合併有序序列: 剩餘尾段 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t merge(const int *a, size_t n, const int *b, size_t m, int *out) {
  size_t i = 0, j = 0, k = 0;
  while (i < n && j < m)
    out[k++] = a[i] <= b[j] ? a[i++] : b[j++];
  while (i < n)
    out[k++] = a[i++];
  while (j < m)
    out[k++] = b[j++];
  return k;
}
int main(void) {
  int a[] = {1, 4}, b[] = {2, 3, 5}, out[5], expected[] = {1, 2, 3, 4, 5};
  assert(merge(a, 2, b, 3, out) == 5 && !memcmp(out, expected, sizeof out));
  assert(merge(a, 0, b, 3, out) == 3 && out[2] == 5);
  puts("merge OK");
  return 0;
}
