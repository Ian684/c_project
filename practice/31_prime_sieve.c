/* 質數篩: 從 p*p 開始劃記 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void sieve(unsigned char *p, size_t n) {
  memset(p, 1, n + 1);
  p[0] = 0;
  if (n)
    p[1] = 0;
  for (size_t i = 2; i <= n / i; i++)
    if (p[i])
      for (size_t j = i * i; j <= n; j += i)
        p[j] = 0;
}
int main(void) {
  unsigned char p[31];
  sieve(p, 30);
  int count = 0;
  for (int i = 0; i <= 30; i++)
    count += p[i];
  assert(count == 10 && p[29] && !p[1]);
  sieve(p, 0);
  assert(!p[0]);
  puts("sieve OK");
  return 0;
}
