#include <stdio.h>

int main(void) {
    unsigned int n;
    int prime = 1;

    if (scanf("%u", &n) != 1 || n < 2) {
        puts("not prime");
        return 0;
    }

    for (unsigned int divisor = 2; divisor <= n / divisor; ++divisor) {
        if (n % divisor == 0) {
            prime = 0;
            break;
        }
    }
    puts(prime ? "prime" : "not prime");
    return 0;
}
