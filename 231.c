#include <stdio.h>
#include <stdlib.h>

int* copyArray(int *arr, int size) {
    int *copy = (int*)malloc(size * sizeof(int));
    if (copy == NULL) return NULL;
    
    for (int i = 0; i < size; i++) {
        copy[i] = arr[i];
    }
    return copy;
}

int main() {
    int original[] = {10, 20, 30, 40, 50};
    int size = sizeof(original) / sizeof(original[0]);
    
    int *copied = copyArray(original, size);
    
    if (copied != NULL) {
        printf("Оригинал: ");
        for (int i = 0; i < size; i++) printf("%d ", original[i]);
        printf("\nКопия: ");
        for (int i = 0; i < size; i++) printf("%d ", copied[i]);
        printf("\n");
        free(copied);
    }
    return 0;
}