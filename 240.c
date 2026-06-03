#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int front;
    int rear;
    int size;
    int capacity;
} Queue;

Queue* createQueue(int capacity) {
    Queue *q = (Queue*)malloc(sizeof(Queue));
    q->data = (int*)malloc(capacity * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->size = 0;
    q->capacity = capacity;
    return q;
}

void enqueue(Queue *q, int value) {
    if (q->size >= q->capacity) {
        printf("Очередь переполнена\n");
        return;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->data[q->rear] = value;
    q->size++;
}

int dequeue(Queue *q) {
    if (q->size == 0) {
        printf("Очередь пуста\n");
        return -1;
    }
    int value = q->data[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return value;
}

void printQueue(Queue *q) {
    printf("Очередь: ");
    for (int i = 0; i < q->size; i++) {
        int idx = (q->front + i) % q->capacity;
        printf("%d ", q->data[idx]);
    }
    printf("\n");
}

int main() {
    Queue *q = createQueue(5);
    
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    printQueue(q);
    
    printf("Извлечено: %d\n", dequeue(q));
    printQueue(q);
    
    enqueue(q, 40);
    enqueue(q, 50);
    printQueue(q);
    
    free(q->data);
    free(q);
    return 0;
}