#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool hasDuplicates = false;
    
    for (int i = 0; i < size && !hasDuplicates; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicates = true;
                break;
            }
        }
    }
    
    if (hasDuplicates) {
        printf("В массиве есть дубликаты\n");
    } else {
        printf("Все элементы уникальны\n");
    }
    return 0;
}