#include <stdio.h>

int main() {
    int arr[] = {45, 23, 78, 12, 56, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    printf("Минимум: %d\n", min);
    printf("Максимум: %d\n", max);
    return 0;
}