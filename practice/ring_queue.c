/* A count distinguishes full from empty when head == tail. */
#include <assert.h>
#include <stdio.h>
#define CAPACITY 4
typedef struct { int data[CAPACITY]; size_t head, tail, count; } Queue;

static int enqueue(Queue *q, int value) {
    if (q->count == CAPACITY) return 0;
    q->data[q->tail] = value;
    q->tail = (q->tail + 1) % CAPACITY;
    ++q->count;
    return 1;
}

static int dequeue(Queue *q, int *out) {
    if (!q->count) return 0;
    *out = q->data[q->head];
    q->head = (q->head + 1) % CAPACITY;
    --q->count;
    return 1;
}

int main(void) {
    Queue q = {0};
    int value = 0;
    assert(!dequeue(&q, &value));
    for (int i = 0; i < CAPACITY; ++i) assert(enqueue(&q, i));
    assert(!enqueue(&q, 99));
    assert(dequeue(&q, &value) && value == 0);
    assert(dequeue(&q, &value) && value == 1);
    assert(enqueue(&q, 4) && enqueue(&q, 5));
    for (int expected = 2; expected <= 5; ++expected) {
        assert(dequeue(&q, &value) && value == expected);
    }
    assert(!dequeue(&q, &value));
    puts("queue wraparound/full/empty: OK");
    return 0;
}
