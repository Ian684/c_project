/* 原地反轉: 雙指標不越過中點 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void reverse(char *s, size_t n) {
  for (size_t i = 0; i < n / 2; i++) {
    char t = s[i];
    s[i] = s[n - 1 - i];
    s[n - 1 - i] = t;
  }
}
int main(void) {
  char s[] = "abcde";
  reverse(s, 5);
  assert(strcmp(s, "edcba") == 0);
  reverse(s, 0);
  assert(strcmp(s, "edcba") == 0);
  puts(s);
  return 0;
}
