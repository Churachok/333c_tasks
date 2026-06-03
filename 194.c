#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    double values[] = {1.1, 2.2, 3.3};
    char text[] = "Hello";
    
    printf("Размер numbers: %zu элементов\n", ARRAY_SIZE(numbers));
    printf("Размер values: %zu элементов\n", ARRAY_SIZE(values));
    printf("Размер text: %zu элементов\n", ARRAY_SIZE(text));
    return 0;
}