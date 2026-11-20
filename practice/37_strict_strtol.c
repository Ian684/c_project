/* 完整字串轉型: errno 與尾端字元 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int parse(const char *s, long *out) {
  char *end;
  errno = 0;
  long x = strtol(s, &end, 10);
  if (errno == ERANGE || end == s || *end)
    return 0;
  *out = x;
  return 1;
}
int main(void) {
  long x;
  assert(parse("-42", &x) && x == -42);
  assert(!parse("12x", &x) && !parse("", &x) &&
         !parse("999999999999999999999999999999", &x));
  puts("strtol validation OK");
  return 0;
}
