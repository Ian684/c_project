#include <stdio.h>

int main(void) {
    unsigned int n;
    unsigned long long result = 1;

    if (scanf("%u", &n) != 1 || n > 20) {
        return 1;
    }

    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }
    printf("%llu\n", result);
    return 0;
}
