#include <stdio.h>

void addToEach(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        *(arr + i) += value;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("До: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    addToEach(arr, size, 10);
    
    printf("\nПосле +10: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}