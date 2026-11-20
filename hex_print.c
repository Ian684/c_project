#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("%02d hex_print\n", 18);
    int values[] = {12, 7, 19, 3, 25, 11, 8};
    size_t count = sizeof(values) / sizeof(values[0]);
    int sum = 0;
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

    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    printf("Sorted: ");
    for (size_t i = 0; i < count; ++i)
        printf("%d%s", values[i], i + 1 == count ? "" : " ");
    putchar('\n');

    char text[] = "C Practice";
    for (size_t i = 0; text[i] != '\0'; ++i)
        text[i] = (char)toupper((unsigned char)text[i]);
    printf("Text: %s\n", text);
    printf("Bytes: %zu\n", strlen(text));

    return EXIT_SUCCESS;
}
