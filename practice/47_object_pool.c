/* 固定物件池: 配置失敗與歸還重用 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int values[3];
  unsigned used;
} Pool;
static int acquire(Pool *p) {
  for (int i = 0; i < 3; i++)
    if (!(p->used & (1u << i))) {
      p->used |= 1u << i;
      return i;
    }
  return -1;
}
static int release(Pool *p, unsigned i) {
  if (i >= 3 || !(p->used & (1u << i)))
    return 0;
  p->used &= ~(1u << i);
  return 1;
}
int main(void) {
  Pool p = {{0}, 0};
  assert(acquire(&p) == 0 && acquire(&p) == 1 && acquire(&p) == 2 &&
         acquire(&p) == -1);
  assert(release(&p, 1) && !release(&p, 1) && acquire(&p) == 1);
  puts("pool reuse OK");
  return 0;
}
