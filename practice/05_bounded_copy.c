/* 有界字串複製: snprintf 回傳值判斷截斷 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char out[5];
  int n = snprintf(out, sizeof out, "%s", "abcdef");
  assert(n == 6 && strcmp(out, "abcd") == 0);
  n = snprintf(out, sizeof out, "%s", "xy");
  assert(n == 2 && strcmp(out, "xy") == 0);
  puts(out);
  return 0;
}
