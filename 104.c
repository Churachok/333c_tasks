#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    
    printf("Цифры в обратном порядке: ");
    while (num > 0) {
        printf("%d", num % 10);
        num /= 10;
    }
    printf("\n");
    return 0;
}