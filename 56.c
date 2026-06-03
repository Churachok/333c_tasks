#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num >= 1 && num <= 10) {
        printf("Число в диапазоне [1, 10]\n");
    } else {
        printf("Число вне диапазона\n");
    }
    return 0;
}