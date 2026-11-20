#include <stdio.h>
enum Day{SUN,MON,TUE,WED,THU,FRI,SAT};
int main(void){int n;if(scanf("%d",&n)!=1||n<0||n>6)return 1;static const char*names[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};puts(names[(enum Day)n]);return 0;}
