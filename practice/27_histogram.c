/* 數字頻率: 索引界限與拒絕非法值 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int histogram(const int *a, size_t n, size_t out[10]) {
  memset(out, 0, 10 * sizeof *out);
  for (size_t i = 0; i < n; i++) {
    if (a[i] < 0 || a[i] > 9)
      return 0;
    out[a[i]]++;
  }
  return 1;
}
int main(void) {
  int a[] = {0, 9, 9}, bad[] = {10};
  size_t out[10];
  assert(histogram(a, 3, out) && out[0] == 1 && out[9] == 2);
  assert(!histogram(bad, 1, out));
  puts("histogram validation OK");
  return 0;
}
