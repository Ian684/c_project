/* 歐幾里得演算法: 0 的邊界 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned gcd(unsigned a, unsigned b) {
  while (b) {
    unsigned r = a % b;
    a = b;
    b = r;
  }
  return a;
}
int main(void) {
  assert(gcd(48, 18) == 6 && gcd(0, 9) == 9 && gcd(0, 0) == 0);
  printf("%u\n", gcd(21, 14));
  return 0;
}
