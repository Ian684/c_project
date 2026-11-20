/* 字串循環移位: 位移對長度取餘數 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void rotate(char *s, size_t k) {
  size_t n = strlen(s);
  if (!n)
    return;
  k %= n;
  char *tmp = malloc(n);
  assert(tmp);
  memcpy(tmp, s, n);
  for (size_t i = 0; i < n; i++)
    s[i] = tmp[(i + k) % n];
  free(tmp);
}
int main(void) {
  char s[] = "abcde", empty[] = "";
  rotate(s, 7);
  assert(strcmp(s, "cdeab") == 0);
  rotate(empty, 3);
  assert(!*empty);
  puts(s);
  return 0;
}
