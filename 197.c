#include <stdio.h>

#define ARRAY_INIT(arr, val, size) do { \
    for (int _i = 0; _i < (size); _i++) { \
        (arr)[_i] = (val); \
    } \
} while(0)

int main() {
    int arr[10];
    ARRAY_INIT(arr, 42, 10);
    
    printf("Массив после инициализации: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}