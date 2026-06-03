#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) return NULL;
    
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }
    return arr;
}

int main() {
    int n = 8;
    int *array = createArray(n);
    
    if (array != NULL) {
        printf("Динамический массив: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        free(array);
    }
    return 0;
}