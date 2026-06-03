#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num >= 1 && num <= 100) {
        printf("В диапазоне\n");
    } else {
        printf("Вне диапазона\n");
    }
    return 0;
}