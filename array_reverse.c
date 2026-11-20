#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){int a[]={12,7,19,3,25,11,8};size_t n=sizeof(a)/sizeof(a[0]);for(size_t i=n;i>0;--i)printf("%d%s",a[i-1],i==1?"\n":" ");return 0;}
