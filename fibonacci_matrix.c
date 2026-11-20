#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
uint64_t fib(unsigned n){uint64_t a=0,b=1;for(unsigned i=0;i<n;++i){uint64_t t=a+b;a=b;b=t;}return a;}int main(void){printf("fib(10)=%llu\n",(unsigned long long)fib(10));return 0;}
