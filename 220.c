#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(5 * sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    
    printf("Исходный массив (5 элементов): ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    
    // Увеличиваем размер до 10
    arr = (int*)realloc(arr, 10 * sizeof(int));
    
    // Заполняем новые элементы
    for (int i = 5; i < 10; i++) {
        arr[i] = (i + 1) * 2;
    }
    
    printf("\nПосле realloc (10 элементов): ");
    for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
    printf("\n");
    
    free(arr);
    return 0;
}