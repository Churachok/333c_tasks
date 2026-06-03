#include <stdio.h>

int compareInt(int a, int b) { return a - b; }
int compareAbs(int a, int b) { return abs(a) - abs(b); }

int findMinIndex(int arr[], int size, int (*compare)(int, int)) {
    int minIdx = 0;
    for (int i = 1; i < size; i++) {
        if (compare(arr[i], arr[minIdx]) < 0) {
            minIdx = i;
        }
    }
    return minIdx;
}

int main() {
    int arr[] = {5, -3, 8, -10, 2, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minIdx = findMinIndex(arr, size, compareInt);
    printf("Минимальное значение: %d\n", arr[minIdx]);
    
    minIdx = findMinIndex(arr, size, compareAbs);
    printf("Минимальное по модулю: %d\n", arr[minIdx]);
    return 0;
}