#include <stdio.h>
int main(void){int a[5];for(int i=0;i<5;i++)if(scanf("%d",&a[i])!=1)return 1;for(int i=4;i>=0;i--)printf("%d%c",a[i],i?' ':'\n');return 0;}
