#include <stdio.h>
int main(void){ unsigned n; unsigned long long a=0,b=1; if(scanf("%u",&n)!=1||n>93)return 1; while(n--){unsigned long long t=a+b;a=b;b=t;} printf("%llu\n",a); return 0; }
