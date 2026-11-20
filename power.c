#include <stdio.h>
int main(void){ unsigned base,exp; unsigned long long result=1; if(scanf("%u %u",&base,&exp)!=2)return 1; while(exp-- > 0)result*=base; printf("%llu\n",result); return 0; }
