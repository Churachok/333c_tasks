#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 20

int main() {
    srand(time(NULL));
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1;
    }
    
    printf("Исходный массив:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nУникальные элементы:\n");
    
    for (int i = 0; i < size; i++) {
        if (!printed[arr[i]]) {
            printf("%d ", arr[i]);
            printed[arr[i]] = 1;
        }
    }
    printf("\n");
    return 0;
}