/* 有界字串複製: 回傳原始長度，呼叫者可判斷是否截斷 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t bounded_copy(char *out, size_t capacity, const char *input) {
  size_t length = strlen(input);
  if (capacity > 0) {
    size_t copied = length < capacity - 1 ? length : capacity - 1;
    memcpy(out, input, copied);
    out[copied] = '\0';
  }
  return length;
}

int main(void) {
  char out[5];
  size_t n = bounded_copy(out, sizeof out, "abcdef");
  assert(n == 6 && strcmp(out, "abcd") == 0);
  n = bounded_copy(out, sizeof out, "xy");
  assert(n == 2 && strcmp(out, "xy") == 0);
  assert(bounded_copy(NULL, 0, "abcdef") == 6);
  char tiny[1];
  assert(bounded_copy(tiny, sizeof tiny, "xy") == 2 && tiny[0] == '\0');
  puts(out);
  return 0;
}
