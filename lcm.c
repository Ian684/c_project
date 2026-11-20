#include <stdio.h>
int main(void){ unsigned a,b,x,y; if(scanf("%u %u",&a,&b)!=2)return 1; x=a;y=b;while(y){unsigned t=x%y;x=y;y=t;} printf("%u\n",a/x*b); return 0; }
