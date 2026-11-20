/* 最少硬幣: 狀態初始化與無解 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int coins(const int *c, size_t n, int amount) {
  assert(amount >= 0 && amount <= 100);
  int best[101];
  best[0] = 0;
  for (int i = 1; i <= amount; i++) {
    best[i] = 101;
    for (size_t j = 0; j < n; j++)
      if (c[j] > 0 && c[j] <= i && best[i - c[j]] + 1 < best[i])
        best[i] = best[i - c[j]] + 1;
  }
  return best[amount] > 100 ? -1 : best[amount];
}
int main(void) {
  int a[] = {1, 3, 4}, b[] = {2};
  assert(coins(a, 3, 6) == 2 && coins(b, 1, 3) == -1 && coins(a, 3, 0) == 0);
  puts("coin DP OK");
  return 0;
}
