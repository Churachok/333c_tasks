#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {45, 23, 78, 12, 56, 78, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN, secondMax = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    
    if (secondMax != INT_MIN) {
        printf("Второй по величине элемент: %d\n", secondMax);
    } else {
        printf("Нет второго по величине элемента\n");
    }
    return 0;
}