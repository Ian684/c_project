#include <stdio.h>
int main(void){int a[5],target;for(int i=0;i<5;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&target)!=1)return 1;for(int i=0;i<5;i++)if(a[i]==target){printf("%d\n",i);return 0;}puts("-1");return 0;}
