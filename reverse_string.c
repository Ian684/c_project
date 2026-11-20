#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("%02d reverse_string\n", 37);
    int values[] = {12, 7, 19, 3, 25, 11, 8};
    size_t count = sizeof(values) / sizeof(values[0]);
    long sum = 0;
    int maximum = values[0];
    int minimum = values[0];

    for (size_t i = 0; i < count; ++i)
    {
        sum += values[i];
        if (values[i] > maximum)
            maximum = values[i];
        if (values[i] < minimum)
            minimum = values[i];
    }

    for (size_t i = 0; i < count; ++i)
    {
        for (size_t j = i + 1; j < count; ++j)
        {
            if (values[j] < values[i])
            {
                int temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    printf("Sum: %ld\n", sum);
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    printf("Average: %.2f\n", (double)sum / (double)count);
    printf("Sorted: ");
    for (size_t i = 0; i < count; ++i)
        printf("%d%s", values[i], i + 1 == count ? "" : " ");
    putchar('\n');

    char text[] = "Complete C exercise";
    size_t letters = 0;
    for (size_t i = 0; text[i] != '\0'; ++i)
        if (isalpha((unsigned char)text[i]))
            ++letters;
    printf("Letters: %zu\n", letters);

    return EXIT_SUCCESS;
}
