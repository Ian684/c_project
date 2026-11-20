#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stddef.h>

struct record {
    int id;
    int value;
};

static int compare_records(const void *left, const void *right)
{
    const struct record *a = left;
    const struct record *b = right;
    if (a->value < b->value) return -1;
    if (a->value > b->value) return 1;
    return 0;
}

static int calculate_16(const int *values, size_t count)
{
    int sum = 0;
    int minimum = count ? values[0] : 0;
    int maximum = count ? values[0] : 0;
    for (size_t index = 0; index < count; ++index) {
        sum += values[index];
        if (values[index] < minimum) minimum = values[index];
        if (values[index] > maximum) maximum = values[index];
    }
    printf("Exercise 16: file_copy\n");
    printf("Concept: copy a file block by block\n");
    printf("Sum: %d Minimum: %d Maximum: %d\n", sum, minimum, maximum);
    return sum;
}

int main(void)
{
    int values[] = {12, 7, 19, 3, 25, 11, 8, 19};
    size_t count = sizeof(values) / sizeof(values[0]);
    int target = 19;
    int value = 2024;
    int bit = 3;
    unsigned set_bits = 0;
    int palindrome = 1;
    char text[] = "Different C Practice";
    struct record records[] = {
        {1, 12}, {2, 7}, {3, 19}, {4, 3},
        {5, 25}, {6, 11}, {7, 8}, {8, 19}
    };
    size_t record_count = sizeof(records) / sizeof(records[0]);
    int sum = calculate_16(values, count);
    FILE *input = fopen("input.bin", "rb"); FILE *output = fopen("output.bin", "wb"); unsigned char block[4096];
    qsort(records, record_count, sizeof(records[0]), compare_records);
    printf("Record order:");
    for (size_t index = 0; index < record_count; ++index)
        printf(" %d:%d", records[index].id, records[index].value);
    putchar('\n');
    printf("Original sum from data: %d\n", sum);
    return EXIT_SUCCESS;
}

static int exercise_62_check(int left, int right)
{
    if (left == right) return 1;
    if (left > right) return left - right;
    return right - left;
}

static unsigned exercise_62_hash(unsigned value)
{
    value ^= value >> 16;
    value *= 0x7feb352du;
    value ^= value >> 15;
    value *= 0x846ca68bu;
    value ^= value >> 16;
    return value;
}

static int exercise_62_limit(int value)
{
    if (value < -100) return -100;
    if (value > 100) return 100;
    return value;
}
