/* 旗標操作: 設定、切換、清除與測試 */
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
  unsigned flags = 0;
  const unsigned READ = 1u, WRITE = 2u, EXECUTE = 4u;
  flags |= READ | WRITE;
  assert((flags & READ) != 0);
  flags ^= EXECUTE;
  flags &= ~WRITE;
  assert(flags == (READ | EXECUTE));
  assert(!(flags & WRITE));
  printf("%u\n", flags);
  return 0;
}
