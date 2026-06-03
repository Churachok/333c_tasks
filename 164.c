#include <stdio.h>

int findElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    printf("Введите число для поиска: ");
    scanf("%d", &target);
    
    int index = findElement(arr, size, target);
    if (index != -1) {
        printf("Элемент %d найден на индексе %d\n", target, index);
    } else {
        printf("Элемент %d не найден\n", target);
    }
    return 0;
}