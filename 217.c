#include <stdio.h>
#include <stdlib.h>

int main() {
    // Использование указателя после free
    int *ptr = malloc(sizeof(int));
    *ptr = 42;
    free(ptr);
    *ptr = 100;  // Неопределённое поведение!
    
    // Выход за границы массива
    int arr[5];
    arr[10] = 5;  // Неопределённое поведение
    
    // Valgrind покажет: Invalid read/write of size 4
    return 0;
}