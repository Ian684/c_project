#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){int n=50,p[51];memset(p,1,sizeof p);p[0]=p[1]=0;for(int i=2;i*i<=n;++i)if(p[i])for(int j=i*i;j<=n;j+=i)p[j]=0;for(int i=2;i<=n;++i)if(p[i])printf("%d ",i);putchar('\n');return 0;}
