#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
static void down(int*a,size_t n,size_t i){for(;;){size_t l=2*i+1,r=l+1,m=i;if(l<n&&a[l]>a[m])m=l;if(r<n&&a[r]>a[m])m=r;if(m==i)return;int t=a[i];a[i]=a[m];a[m]=t;i=m;}}int main(void){int a[]={12,7,19,3,25,11,8};size_t n=sizeof(a)/sizeof*a;for(size_t i=n/2;i--;)down(a,n,i);for(size_t i=n;i--;){{int t=a[0];a[0]=a[i];a[i]=t;down(a,i,0);}}for(size_t i=0;i<n;++i)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
