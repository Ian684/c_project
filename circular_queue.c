#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){int q[4]={0},h=0,t=0,c=0;for(int v=1;v<=5;++v){if(c<4){q[t]=v;t=(t+1)%4;++c;}else puts("overflow");}while(c){printf("%d ",q[h]);h=(h+1)%4;--c;}putchar('\n');return 0;}
