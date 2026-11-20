/* CSV 欄位輸出: 引號必須成對跳脫 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void quote(FILE *f, const char *s) {
  fputc('"', f);
  for (; *s; s++) {
    if (*s == '"')
      fputc('"', f);
    fputc(*s, f);
  }
  fputc('"', f);
}
int main(int argc, char **argv) {
  if (argc != 2)
    return 2;
  FILE *f = fopen(argv[1], "w+b");
  assert(f);
  quote(f, "a,\"b");
  rewind(f);
  char out[20] = {0};
  assert(fread(out, 1, sizeof out - 1, f) == 7);
  assert(strcmp(out, "\"a,\"\"b\"") == 0);
  fclose(f);
  puts(out);
  return 0;
}
