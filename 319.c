#include <stdio.h>

#define IN_RANGE(value, min, max) ((value) >= (min) && (value) <= (max))

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (IN_RANGE(num, 1, 100)) {
        printf("%d в диапазоне [1, 100]\n", num);
    } else {
        printf("%d вне диапазона [1, 100]\n", num);
    }
    
    if (IN_RANGE(num, -10, 10)) {
        printf("%d в диапазоне [-10, 10]\n", num);
    }
    
    return 0;
}