#include <stdio.h>
typedef struct{int x;int y;} Point;
int main(void){Point p;if(scanf("%d %d",&p.x,&p.y)!=2)return 1;printf("(%d,%d)\n",p.x,p.y);return 0;}
