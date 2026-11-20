/* 排序陣列去重: 讀寫指標分離 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t unique(int *a, size_t n) {
  size_t used = 0;
  for (size_t i = 0; i < n; i++)
    if (!used || a[i] != a[used - 1])
      a[used++] = a[i];
  return used;
}
int main(void) {
  int a[] = {1, 1, 2, 2, 3};
  assert(unique(a, 5) == 3 && a[0] == 1 && a[2] == 3);
  assert(unique(a, 0) == 0);
  puts("dedup OK");
  return 0;
}
