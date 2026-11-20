/* 回文判定: 空字串與偶數長度 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int palindrome(const char *s) {
  size_t n = strlen(s);
  for (size_t i = 0; i < n / 2; i++)
    if (s[i] != s[n - 1 - i])
      return 0;
  return 1;
}
int main(void) {
  assert(palindrome("") && palindrome("abba") && !palindrome("abc"));
  puts("palindrome boundaries OK");
  return 0;
}
