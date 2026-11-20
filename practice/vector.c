/* Dynamic array: keep the old allocation when realloc fails. */
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct { int *data; size_t size, capacity; } Vector;

static int push(Vector *v, int value) {
    if (v->size == v->capacity) {
        size_t next = v->capacity ? v->capacity * 2 : 4;
        if (next < v->capacity || next > SIZE_MAX / sizeof *v->data) return 0;
        int *grown = realloc(v->data, next * sizeof *grown);
        if (!grown) return 0;
        v->data = grown;
        v->capacity = next;
    }
    v->data[v->size++] = value;
    return 1;
}

int main(void) {
    Vector values = {0};
    for (int i = 0; i < 100; ++i) {
        if (!push(&values, i * i)) { free(values.data); return 1; }
    }
    assert(values.size == 100 && values.capacity >= values.size);
    for (size_t i = 0; i < values.size; ++i) assert(values.data[i] == (int)(i * i));
    printf("size=%zu first=%d last=%d\n", values.size, values.data[0], values.data[99]);
    free(values.data);
    return 0;
}
