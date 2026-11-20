/* 欄位寬度讀取: 限制字串大小與檢查轉換數 */
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
  char name[6] = {0};
  int age = 0;
  assert(sscanf("alice 20", "%5s %d", name, &age) == 2 &&
         strcmp(name, "alice") == 0 && age == 20);
  assert(sscanf("toolong 20", "%5s %d", name, &age) == 1);
  assert(strlen(name) == 5);
  puts("bounded sscanf OK");
  return 0;
}
