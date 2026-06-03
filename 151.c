#include <stdio.h>

int findMinIndex(int arr[], int size, int (*compare)(int, int)) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (compare(arr[i], arr[minIndex])) {
            minIndex = i;
        }
    }
    return minIndex;
}

int less(int a, int b) { return a < b; }

int main() {
    int arr[] = {45, 23, 78, 12, 56, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minIdx = findMinIndex(arr, size, less);
    printf("Минимальный элемент: %d на индексе %d\n", arr[minIdx], minIdx);
    return 0;
}