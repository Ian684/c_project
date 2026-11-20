#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){char b[5]={0};size_t p=0;for(char c='a';c<'g';++c)b[p++%5]=c;for(size_t i=0;i<5;++i)putchar(b[i]);putchar('\n');return 0;}
