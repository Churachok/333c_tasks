#include <stdio.h>

int main() {
    int arr[] = {23, 45, 12, 67, 34, 89, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Максимальный элемент: %d\n", max);
    return 0;
}