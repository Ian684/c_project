#include <ctype.h>
#include <stdio.h>

int main(void) {
    int character;
    int in_word = 0;
    unsigned long words = 0;

    while ((character = getchar()) != EOF) {
        if (isspace((unsigned char)character)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            ++words;
        }
    }
    printf("%lu\n", words);
    return 0;
}
