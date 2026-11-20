#include <stdio.h>
void countdown(int n){if(n<0)return;printf("%d%c",n,n?' ':'\n');countdown(n-1);}
int main(void){int n;if(scanf("%d",&n)!=1)return 1;countdown(n);return 0;}
