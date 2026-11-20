/* 最小堆積: 上浮與下沉 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void push(int *h, size_t *n, int x) {
  size_t i = (*n)++;
  while (i && h[(i - 1) / 2] > x) {
    h[i] = h[(i - 1) / 2];
    i = (i - 1) / 2;
  }
  h[i] = x;
}
static int pop(int *h, size_t *n) {
  assert(*n);
  int result = h[0], x = h[--*n];
  size_t i = 0;
  while (2 * i + 1 < *n) {
    size_t c = 2 * i + 1;
    if (c + 1 < *n && h[c + 1] < h[c])
      c++;
    if (h[c] >= x)
      break;
    h[i] = h[c];
    i = c;
  }
  if (*n)
    h[i] = x;
  return result;
}
int main(void) {
  int h[5];
  size_t n = 0;
  int a[] = {4, 1, 3, 1, 2}, expected[] = {1, 1, 2, 3, 4};
  for (int i = 0; i < 5; i++)
    push(h, &n, a[i]);
  for (int i = 0; i < 5; i++)
    assert(pop(h, &n) == expected[i]);
  assert(!n);
  puts("heap ordering OK");
  return 0;
}
