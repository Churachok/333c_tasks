#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;
    
    printf("Значение x = %d\n", x);
    printf("Адрес x = %p\n", &x);
    printf("Значение ptr = %p\n", ptr);
    printf("Значение *ptr = %d\n", *ptr);
    printf("Адрес ptr = %p\n", &ptr);
    return 0;
}