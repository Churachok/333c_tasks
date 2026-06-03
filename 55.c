#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 3;
    
    if (a < b && b > c) {
        printf("Оба условия истинны\n");
    }
    
    if (a > b || c < a) {
        printf("Хотя бы одно условие истинно\n");
    }
    
    if (!(a == b)) {
        printf("a не равно b\n");
    }
    return 0;
}