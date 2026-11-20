#include <stdio.h>
int main(void){unsigned n;unsigned count=0;if(scanf("%u",&n)!=1)return 1;while(n){count+=n&1u;n>>=1;}printf("%u\n",count);return 0;}
