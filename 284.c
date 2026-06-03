#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    printf("Отсортированный массив: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    printf("\nВведите число для поиска: ");
    scanf("%d", &target);
    
    int index = binarySearch(arr, size, target);
    
    if (index != -1) {
        printf("Элемент %d найден на индексе %d\n", target, index);
    } else {
        printf("Элемент %d не найден\n", target);
    }
    return 0;
}