/* 二進位檔案往返: fwrite/fread 元素數 */
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
  unsigned char input[] = {0, 1, 128, 255}, out[4];
  assert(fwrite(input, 1, 4, f) == 4);
  rewind(f);
  assert(fread(out, 1, 4, f) == 4 && !memcmp(input, out, 4));
  assert(fgetc(f) == EOF);
  fclose(f);
  puts("binary roundtrip OK");
  return 0;
}
