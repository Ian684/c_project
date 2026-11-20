#include <stdio.h>
int main(void){int c;unsigned long n=0;while((c=getchar())!=EOF)if(c!='\n')++n;printf("%lu\n",n);return 0;}
