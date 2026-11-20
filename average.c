#include <stdio.h>
int main(void){ int n; double x,sum=0; if(scanf("%d",&n)!=1||n<=0)return 1; for(int i=0;i<n;i++){if(scanf("%lf",&x)!=1)return 1;sum+=x;} printf("%.3f\n",sum/n); return 0; }
