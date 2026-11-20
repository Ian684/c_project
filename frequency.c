#include <stdio.h>
int main(void){int c;unsigned count[10]={0};while((c=getchar())!=EOF)if(c>='0'&&c<='9')++count[c-'0'];for(int i=0;i<10;i++)printf("%d:%u%c",i,count[i],i==9?'\n':' ');return 0;}
