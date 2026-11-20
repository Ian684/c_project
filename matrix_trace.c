#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}},trace=0;for(int i=0;i<3;++i)trace+=a[i][i];printf("trace=%d\n",trace);return 0;}
