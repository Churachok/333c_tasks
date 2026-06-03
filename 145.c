#include <stdio.h>

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {23, 56, 12, 89, 45, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Максимум: %d\n", getMax(arr, size));
    return 0;
}