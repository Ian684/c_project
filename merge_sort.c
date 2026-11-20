#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
static void sort(int*a,int l,int r){if(r-l<2)return;int m=l+(r-l)/2;sort(a,l,m);sort(a,m,r);int*b=malloc((r-l)*sizeof*b),i=l,j=m,k=0;while(i<m&&j<r)b[k++]=a[i]<=a[j]?a[i++]:a[j++];while(i<m)b[k++]=a[i++];while(j<r)b[k++]=a[j++];for(k=0;k<r-l;++k)a[l+k]=b[k];free(b);}int main(void){int a[]={12,7,19,3,25,11,8};size_t n=sizeof(a)/sizeof*a;sort(a,0,(int)n);for(size_t i=0;i<n;++i)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
