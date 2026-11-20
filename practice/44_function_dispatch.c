/* 函式指標表: 操作碼界限 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int add(int a, int b) { return a + b; }
static int sub(int a, int b) { return a - b; }
static int dispatch(unsigned op, int a, int b, int *out) {
  int (*operations[])(int, int) = {add, sub};
  if (op >= sizeof operations / sizeof operations[0])
    return 0;
  *out = operations[op](a, b);
  return 1;
}
int main(void) {
  int out;
  assert(dispatch(0, 8, 3, &out) && out == 11);
  assert(dispatch(1, 8, 3, &out) && out == 5);
  assert(!dispatch(2, 1, 2, &out));
  puts("dispatch OK");
  return 0;
}
