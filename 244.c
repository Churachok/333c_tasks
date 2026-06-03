#include <stdio.h>
#include <stdlib.h>

int* filterEven(int *arr, int size, int *newSize) {
    *newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*newSize)++;
        }
    }
    
    int *filtered = (int*)malloc(*newSize * sizeof(int));
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            filtered[j++] = arr[i];
        }
    }
    return filtered;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize;
    
    int *evenNumbers = filterEven(arr, size, &newSize);
    
    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    printf("\nЧётные числа: ");
    for (int i = 0; i < newSize; i++) printf("%d ", evenNumbers[i]);
    printf("\n");
    
    free(evenNumbers);
    return 0;
}