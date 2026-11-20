/* 前綴和查詢: 前導 0 消除左端特例 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void prefix(const int *a, size_t n, long long *out) {
  out[0] = 0;
  for (size_t i = 0; i < n; i++)
    out[i + 1] = out[i] + a[i];
}
int main(void) {
  int a[] = {2, -3, 5, 7};
  long long p[5];
  prefix(a, 4, p);
  assert(p[4] - p[1] == 9 && p[2] - p[2] == 0);
  printf("%lld\n", p[4]);
  return 0;
}
