#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("ptr = %p\n", ptr);
    printf("ptr + 1 = %p\n", ptr + 1);
    printf("ptr + 2 = %p\n", ptr + 2);
    
    printf("\nИспользование адресной арифметики:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    return 0;
}