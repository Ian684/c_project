#include <stdio.h>
int main(void){unsigned n,k;if(scanf("%u %u",&n,&k)!=2||k>=32)return 1;printf("%u\n",n^(1u<<k));return 0;}
