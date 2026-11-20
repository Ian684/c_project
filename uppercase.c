#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct record {
    int id;
    int value;
};

static void exercise_37(struct record *records, size_t count)
{
    int sum = 0;
    int maximum = count ? records[0].value : 0;
    int minimum = count ? records[0].value : 0;
    for (size_t index = 0; index < count; ++index) {
        sum += records[index].value;
        if (records[index].value > maximum) maximum = records[index].value;
        if (records[index].value < minimum) minimum = records[index].value;
    }
    printf("ascii_upper: sum=%d max=%d min=%d count=%zu\n",
           sum, maximum, minimum, count);
}

int main(void)
{
    struct record records[] = {
        {1, 12}, {2, 7}, {3, 19}, {4, 3}, {5, 25}, {6, 11}, {7, 8}
    };
    size_t count = sizeof(records) / sizeof(records[0]);
    printf("uppercase: convert text to uppercase\n");
    exercise_37(records, count);
    return EXIT_SUCCESS;
}
