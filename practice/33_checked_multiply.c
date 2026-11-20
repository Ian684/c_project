/* 非負整數乘法: 乘之前檢查界限 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int multiply(unsigned long long a, unsigned long long b,
                    unsigned long long *out) {
  if (b && a > ULLONG_MAX / b)
    return 0;
  *out = a * b;
  return 1;
}
int main(void) {
  unsigned long long x;
  assert(multiply(12, 13, &x) && x == 156);
  assert(multiply(ULLONG_MAX, 0, &x) && x == 0);
  assert(!multiply(ULLONG_MAX, 2, &x));
  puts("checked multiplication OK");
  return 0;
}
