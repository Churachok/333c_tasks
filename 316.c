#include <stdio.h>
#include <stdbool.h>

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 2, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Массив 1: %s\n", hasDuplicates(arr1, size1) ? "есть дубликаты" : "нет дубликатов");
    printf("Массив 2: %s\n", hasDuplicates(arr2, size2) ? "есть дубликаты" : "нет дубликатов");
    return 0;
}