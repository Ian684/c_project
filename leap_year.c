#include <stdio.h>
int main(void){int y;if(scanf("%d",&y)!=1)return 1;puts((y%400==0||(y%4==0&&y%100!=0))?"leap":"common");return 0;}
