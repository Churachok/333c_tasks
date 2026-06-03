#include <stdio.h>
#include <stdlib.h>

int* resizeArray(int *arr, int oldSize, int newSize) {
    arr = (int*)realloc(arr, newSize * sizeof(int));
    if (arr != NULL) {
        for (int i = oldSize; i < newSize; i++) {
            arr[i] = 0;
        }
    }
    return arr;
}

int main() {
    int size = 5;
    int *arr = (int*)malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    
    printf("Исходный массив (size=%d): ", size);
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    size = 10;
    arr = resizeArray(arr, 5, size);
    
    printf("\nПосле увеличения (size=%d): ", size);
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    
    free(arr);
    return 0;
}