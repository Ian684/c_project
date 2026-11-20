/* 二階矩陣乘法: 累積乘積與輸出初始化 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void multiply(const int a[4], const int b[4], long long out[4]) {
  for (int r = 0; r < 2; r++)
    for (int c = 0; c < 2; c++) {
      out[r * 2 + c] = 0;
      for (int k = 0; k < 2; k++)
        out[r * 2 + c] += (long long)a[r * 2 + k] * b[k * 2 + c];
    }
}
int main(void) {
  int a[] = {1, 2, 3, 4}, b[] = {1, 0, 0, 1};
  long long out[4];
  multiply(a, b, out);
  for (int i = 0; i < 4; i++)
    assert(out[i] == a[i]);
  int zero[4] = {0};
  multiply(a, zero, out);
  assert(out[3] == 0);
  puts("matrix multiply OK");
  return 0;
}
