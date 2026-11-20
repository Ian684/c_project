#include <stdio.h>
int main(void){int s[8],top=0,x;while(scanf("%d",&x)==1&&top<8)s[top++]=x;while(top){int value=s[--top];printf("%d%c",value,top?' ':'\n');}return 0;}
