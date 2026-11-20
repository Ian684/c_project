#include <stdio.h>
int main(void){int a[3][3],sum=0;for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(scanf("%d",&a[i][j])!=1)return 1;for(int i=0;i<3;i++)sum+=a[i][i];printf("%d\n",sum);return 0;}
