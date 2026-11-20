#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int gcd(int a,int b){while(b){int t=a%b;a=b;b=t;}return a;}int main(void){printf("gcd(84,30)=%d\n",gcd(84,30));return 0;}
