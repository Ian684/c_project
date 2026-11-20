#include <stdio.h>
unsigned long long power(unsigned b,unsigned e){return e?b*power(b,e-1):1;}
int main(void){unsigned b,e;if(scanf("%u %u",&b,&e)!=2)return 1;printf("%llu\n",power(b,e));return 0;}
