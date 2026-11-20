/* 隨機存取: 位移與 ftell */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if (argc != 2)
    return 2;
  FILE *f = fopen(argv[1], "w+b");
  assert(f);
  assert(fputs("abcdef", f) >= 0);
  assert(!fseek(f, 2, SEEK_SET));
  assert(ftell(f) == 2 && fgetc(f) == 'c');
  assert(!fseek(f, -1, SEEK_END) && fgetc(f) == 'f');
  fclose(f);
  puts("file offsets OK");
  return 0;
}
