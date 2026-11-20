#include <stdio.h>
int main(void){int c,value=0,sign=1,in=0,sum=0;while((c=getchar())!=EOF){if(c=='-'&&!in)sign=-1;else if(c>='0'&&c<='9'){value=value*10+c-'0';in=1;}else if(in){sum+=sign*value;value=0;sign=1;in=0;}}if(in)sum+=sign*value;printf("%d\n",sum);return 0;}
