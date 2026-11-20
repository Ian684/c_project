#include <stdio.h>
int main(void){int a[5];for(int i=0;i<5;i++)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<5;i++)for(int j=i+1;j<5;j++)if(a[j]<a[i]){int t=a[i];a[i]=a[j];a[j]=t;}for(int i=0;i<5;i++)printf("%d%c",a[i],i==4?'\n':' ');return 0;}
