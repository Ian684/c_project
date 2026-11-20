/* 排序陣列搜尋: 半開區間邊界 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int search(const int *a, size_t n, int x) {
  size_t l = 0, r = n;
  while (l < r) {
    size_t m = l + (r - l) / 2;
    if (a[m] < x)
      l = m + 1;
    else
      r = m;
  }
  return l < n && a[l] == x ? (int)l : -1;
}
int main(void) {
  int a[] = {1, 2, 2, 8};
  assert(search(a, 4, 2) == 1 && search(a, 4, 9) == -1 &&
         search(a, 0, 1) == -1);
  puts("binary search OK");
  return 0;
}
