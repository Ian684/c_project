/* 固定格式紀錄: 序列化不直接寫 struct padding */
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
  uint16_t id;
  uint32_t value;
} Record;
static void pack(Record r, unsigned char out[6]) {
  out[0] = (unsigned char)(r.id >> 8);
  out[1] = (unsigned char)r.id;
  for (unsigned i = 0; i < 4; i++)
    out[2 + i] = (unsigned char)(r.value >> (24 - 8 * i));
}
int main(void) {
  Record r = {0x1234, 0x55667788};
  unsigned char out[6];
  pack(r, out);
  unsigned char expected[] = {0x12, 0x34, 0x55, 0x66, 0x77, 0x88};
  assert(!memcmp(out, expected, 6));
  printf("wire size=%zu\n", sizeof out);
  return 0;
}
