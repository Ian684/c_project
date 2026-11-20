#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int cmp(const void*a,const void*b){int x=*(const int*)a,y=*(const int*)b;return (x>y)-(x<y);}int main(void){int a[]={12,7,19,3,25,11,8};size_t n=sizeof(a)/sizeof(a[0]);qsort(a,n,sizeof(*a),cmp);for(size_t i=0;i<n;++i)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
