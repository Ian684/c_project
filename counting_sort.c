#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){int a[]={4,2,2,8,3,3,1};int b[9]={0};for(size_t i=0;i<7;++i)++b[a[i]];for(int v=1;v<9;++v)while(b[v]--)printf("%d ",v);putchar('\n');return 0;}
