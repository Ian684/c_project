/* 結構排序: 比較器不以相減避免溢位 */
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
  int score, id;
} Record;
static int compare(const void *x, const void *y) {
  const Record *a = x, *b = y;
  if (a->score != b->score)
    return (a->score < b->score) - (a->score > b->score);
  return (a->id > b->id) - (a->id < b->id);
}
int main(void) {
  Record a[] = {{90, 2}, {100, 3}, {90, 1}};
  qsort(a, 3, sizeof *a, compare);
  assert(a[0].id == 3 && a[1].id == 1 && a[2].id == 2);
  puts("record tie ordering OK");
  return 0;
}
