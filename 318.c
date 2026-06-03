#include <stdio.h>
#include <stdlib.h>

int* getUniqueValues(int arr[], int size, int *uniqueSize) {
    int *temp = (int*)malloc(size * sizeof(int));
    *uniqueSize = 0;
    
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < *uniqueSize; j++) {
            if (temp[j] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[(*uniqueSize)++] = arr[i];
        }
    }
    int *result = (int*)malloc(*uniqueSize * sizeof(int));
    for (int i = 0; i < *uniqueSize; i++) {
        result[i] = temp[i];
    }
    free(temp);
    
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int uniqueSize;
    
    int *unique = getUniqueValues(arr, size, &uniqueSize);
    
    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    printf("\nУникальные значения: ");
    for (int i = 0; i < uniqueSize; i++) printf("%d ", unique[i]);
    printf("\n");
    
    free(unique);
    return 0;
}