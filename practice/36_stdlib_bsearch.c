/* 標準庫二分搜尋: 空回傳與指標差 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compare(const void *a, const void *b) {
  int x = *(const int *)a, y = *(const int *)b;
  return (x > y) - (x < y);
}
int main(void) {
  int a[] = {1, 3, 5, 7}, key = 5;
  int *p = bsearch(&key, a, 4, sizeof *a, compare);
  assert(p && p - a == 2);
  key = 9;
  assert(!bsearch(&key, a, 4, sizeof *a, compare));
  puts("bsearch OK");
  return 0;
}
