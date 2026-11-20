#include <stdio.h>
int main(void){int q[8],head=0,tail=0,x;while(scanf("%d",&x)==1&&tail<8)q[tail++]=x;while(head<tail){int value=q[head++];printf("%d%c",value,head==tail?'\n':' ');}return 0;}
