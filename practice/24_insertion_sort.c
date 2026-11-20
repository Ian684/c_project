/* 插入排序: 移動元素再放回 key */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void sort(int *a, size_t n) {
  for (size_t i = 1; i < n; i++) {
    int x = a[i];
    size_t j = i;
    while (j && a[j - 1] > x) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = x;
  }
}
int main(void) {
  int a[] = {3, -1, 3, 0};
  sort(a, 4);
  int expected[] = {-1, 0, 3, 3};
  assert(!memcmp(a, expected, sizeof a));
  sort(a, 0);
  puts("insertion sort OK");
  return 0;
}
