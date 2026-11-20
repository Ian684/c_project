/* Strict command-line parsing: reject trailing text and signed overflow. */
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    long long sum = 0;
    if (argc < 2) { fprintf(stderr, "usage: int_sum INTEGER...\n"); return 2; }
    for (int i = 1; i < argc; ++i) {
        char *end = NULL;
        errno = 0;
        long long value = strtoll(argv[i], &end, 10);
        if (errno == ERANGE || end == argv[i] || *end != '\0') {
            fprintf(stderr, "invalid integer: %s\n", argv[i]); return 2;
        }
        if ((value > 0 && sum > LLONG_MAX - value) ||
            (value < 0 && sum < LLONG_MIN - value)) {
            fprintf(stderr, "sum overflow\n"); return 2;
        }
        sum += value;
    }
    printf("%lld\n", sum);
    return 0;
}
