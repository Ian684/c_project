#include <stdio.h>
int main(void){ unsigned a,b; if(scanf("%u %u",&a,&b)!=2)return 1; while(b){unsigned t=a%b;a=b;b=t;} printf("%u\n",a); return 0; }
