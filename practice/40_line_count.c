/* 檔案行數: 最後一行沒有換行 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t lines(FILE *f) {
  int c, last = '\n';
  size_t n = 0;
  while ((c = fgetc(f)) != EOF) {
    if (c == '\n')
      n++;
    last = c;
  }
  return n + (last != '\n');
}
int main(int argc, char **argv) {
  if (argc != 2)
    return 2;
  FILE *f = fopen(argv[1], "w+b");
  assert(f);
  assert(lines(f) == 0);
  fputs("a\nb", f);
  rewind(f);
  assert(lines(f) == 2);
  fclose(f);
  puts("line counting OK");
  return 0;
}
