#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
static void sort(int*a,int lo,int hi){if(lo>=hi)return;int p=a[(lo+hi)/2],i=lo,j=hi;do{while(a[i]<p)++i;while(a[j]>p)--j;if(i<=j){int t=a[i];a[i++]=a[j];a[j--]=t;}}while(i<=j);if(lo<j)sort(a,lo,j);if(i<hi)sort(a,i,hi);}int main(void){int a[]={12,7,19,3,25,11,8};size_t n=sizeof(a)/sizeof*a;sort(a,0,(int)n-1);for(size_t i=0;i<n;++i)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
