/* 物件表示法: unsigned char 可檢視物件 bytes */
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
  uint32_t value = 0x01020304;
  unsigned char bytes[sizeof value];
  memcpy(bytes, &value, sizeof value);
  int little = bytes[0] == 4, big = bytes[0] == 1;
  assert(little || big);
  uint32_t restored = 0;
  memcpy(&restored, bytes, sizeof restored);
  assert(restored == value);
  puts(little ? "little endian" : "big endian");
  return 0;
}
