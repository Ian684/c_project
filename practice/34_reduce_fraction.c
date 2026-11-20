/* 分數約分: 正分母與公因數 */
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
  unsigned n = 42, d = 56, g = gcd(n, d);
  assert(g);
  n /= g;
  d /= g;
  assert(n == 3 && d == 4);
  g = gcd(0, 9);
  assert(g == 9);
  printf("%u/%u\n", n, d);
  return 0;
}
