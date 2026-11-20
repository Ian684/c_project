#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

int main(void) {
    struct Node *head = NULL;
    for (int value = 3; value >= 1; --value) {
        struct Node *node = malloc(sizeof(*node));
        if (node == NULL) {
            return 1;
        }
        node->value = value;
        node->next = head;
        head = node;
    }

    for (struct Node *node = head; node != NULL; node = node->next) {
        printf("%d ", node->value);
    }
    putchar('\n');

    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
    return 0;
}
