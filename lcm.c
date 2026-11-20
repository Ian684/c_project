#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
unsigned gcd(unsigned a,unsigned b){while(b){unsigned t=a%b;a=b;b=t;}return a;}int main(void){unsigned a=21,b=6;printf("lcm(%u,%u)=%u\n",a,b,a/gcd(a,b)*b);return 0;}
