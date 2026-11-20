#include <stdio.h>
#include <string.h>

int main(void) {
    char text[128];

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    text[strcspn(text, "\n")] = '\0';
    for (size_t i = strlen(text); i > 0; --i) {
        putchar(text[i - 1]);
    }
    putchar('\n');
    return 0;
}
