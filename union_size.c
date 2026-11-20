#include <stdio.h>
#include <stddef.h>
union Value{int i;float f;};
int main(void){printf("%zu %zu\n",sizeof(union Value),offsetof(union Value,f));return 0;}
