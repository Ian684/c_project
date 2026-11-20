#include <stdio.h>

int main(void) {
    int values[5];
    int sum = 0;
    int minimum;
    int maximum;

    for (size_t i = 0; i < 5; ++i) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
        sum += values[i];
    }

    minimum = maximum = values[0];
    for (size_t i = 1; i < 5; ++i) {
        if (values[i] < minimum) minimum = values[i];
        if (values[i] > maximum) maximum = values[i];
    }

    printf("sum=%d min=%d max=%d\n", sum, minimum, maximum);
    return 0;
}
