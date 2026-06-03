#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *buffer;
    int capacity;
    int head;
    int tail;
    int count;
} CircularBuffer;

CircularBuffer* createBuffer(int capacity) {
    CircularBuffer *cb = (CircularBuffer*)malloc(sizeof(CircularBuffer));
    cb->buffer = (int*)malloc(capacity * sizeof(int));
    cb->capacity = capacity;
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
    return cb;
}

bool isFull(CircularBuffer *cb) {
    return cb->count == cb->capacity;
}

bool isEmpty(CircularBuffer *cb) {
    return cb->count == 0;
}

void push(CircularBuffer *cb, int value) {
    if (isFull(cb)) {
        printf("Буфер полон, перезапись %d\n", cb->buffer[cb->head]);
        cb->head = (cb->head + 1) % cb->capacity;
    } else {
        cb->count++;
    }
    cb->buffer[cb->tail] = value;
    cb->tail = (cb->tail + 1) % cb->capacity;
}

int pop(CircularBuffer *cb) {
    if (isEmpty(cb)) {
        printf("Буфер пуст\n");
        return -1;
    }
    int value = cb->buffer[cb->head];
    cb->head = (cb->head + 1) % cb->capacity;
    cb->count--;
    return value;
}

void printBuffer(CircularBuffer *cb) {
    printf("Буфер: ");
    for (int i = 0; i < cb->count; i++) {
        int idx = (cb->head + i) % cb->capacity;
        printf("%d ", cb->buffer[idx]);
    }
    printf(" (head=%d, tail=%d, count=%d)\n", cb->head, cb->tail, cb->count);
}

int main() {
    CircularBuffer *cb = createBuffer(5);
    
    for (int i = 1; i <= 7; i++) {
        push(cb, i * 10);
        printBuffer(cb);
    }
    
    printf("\nИзвлечение: %d\n", pop(cb));
    printBuffer(cb);
    printf("Извлечение: %d\n", pop(cb));
    printBuffer(cb);
    
    free(cb->buffer);
    free(cb);
    return 0;
}