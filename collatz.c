#include <stdio.h>
int main(void){ unsigned long long n; if(scanf("%llu",&n)!=1||n==0)return 1; printf("%llu",n); while(n!=1){n=n%2?n*3+1:n/2;printf(" %llu",n);} putchar('\n'); return 0; }
