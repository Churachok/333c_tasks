#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {34, 78, 12, 90, 45, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Максимальный элемент: %d\n", findMax(arr, size));
    return 0;
}