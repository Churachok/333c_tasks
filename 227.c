#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n;
    
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        sum += arr[i];
    }
    
    printf("Массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nСумма элементов: %d\n", sum);
    
    free(arr);
    return 0;
}