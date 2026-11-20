#include <stdio.h>
#include <stdlib.h>
int main(void){char s[64],*end;long value;if(scanf("%63s",s)!=1)return 1;value=strtol(s,&end,10);if(*end!='\0')return 1;printf("%ld\n",value);return 0;}
