#include <stdio.h>
int main(void){int a[5],x;for(int i=0;i<5;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&x)!=1)return 1;int l=0,r=4;while(l<=r){int m=(l+r)/2;if(a[m]==x){printf("%d\n",m);return 0;}if(a[m]<x)l=m+1;else r=m-1;}puts("-1");return 0;}
