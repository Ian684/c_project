#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){int a[]={12,7,19,3,25};int target=3,r=-1;for(size_t i=0;i<sizeof(a)/sizeof(a[0]);++i)if(a[i]==target)r=(int)i;printf("index=%d\n",r);return 0;}
