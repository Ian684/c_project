/* 字串兩端修剪: memmove 支援重疊 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void trim(char *s) {
  size_t a = 0, b = strlen(s);
  while (a < b && isspace((unsigned char)s[a]))
    a++;
  while (b > a && isspace((unsigned char)s[b - 1]))
    b--;
  memmove(s, s + a, b - a);
  s[b - a] = 0;
}
int main(void) {
  char a[] = "  hi \t", b[] = "  ";
  trim(a);
  trim(b);
  assert(strcmp(a, "hi") == 0 && b[0] == 0);
  puts(a);
  return 0;
}
