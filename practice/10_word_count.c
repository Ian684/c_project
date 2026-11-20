/* 空白分詞計數: unsigned char 與 ctype */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t words(const char *s) {
  size_t count = 0;
  int in = 0;
  for (; *s; s++) {
    int space = isspace((unsigned char)*s);
    if (!space && !in)
      count++;
    in = !space;
  }
  return count;
}
int main(void) {
  assert(words(" a\tbb\n c ") == 3 && words("") == 0 && words("   ") == 0);
  printf("%zu\n", words("hello world"));
  return 0;
}
