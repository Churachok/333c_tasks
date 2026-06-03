#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == b && b == c) {
        printf("Все равны\n");
    } else if (a == b || a == c || b == c) {
        printf("Два равны\n");
    } else {
        printf("Все разные\n");
    }
    return 0;
}