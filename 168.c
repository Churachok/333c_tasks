#include <stdio.h>

int removeElement(int arr[], int size, int target) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[newSize++] = arr[i];
        }
    }
    return newSize;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    int newSize = removeElement(arr, size, 2);
    
    printf("\nПосле удаления 2: ");
    for (int i = 0; i < newSize; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}