/* Pointer-to-pointer deletion handles the head and interior nodes alike. */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Node { int value; struct Node *next; } Node;

static int prepend(Node **head, int value) {
    Node *node = malloc(sizeof *node);
    if (!node) return 0;
    node->value = value; node->next = *head; *head = node;
    return 1;
}

static int remove_first(Node **head, int value) {
    while (*head) {
        if ((*head)->value == value) {
            Node *removed = *head;
            *head = removed->next; free(removed); return 1;
        }
        head = &(*head)->next;
    }
    return 0;
}

int main(void) {
    Node *head = NULL;
    for (int i = 3; i >= 1; --i) {
        if (!prepend(&head, i)) {
            while (head) { Node *next = head->next; free(head); head = next; }
            return 1;
        }
    }
    assert(remove_first(&head, 1) && head->value == 2);
    assert(remove_first(&head, 3) && head->next == NULL);
    assert(!remove_first(&head, 7));
    assert(remove_first(&head, 2) && head == NULL);
    assert(!remove_first(&head, 1));
    puts("linked list head/tail/missing: OK");
    return 0;
}
