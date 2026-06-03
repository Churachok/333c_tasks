#include <stdio.h>

int main() {
    int num;
    
    printf("Введите положительное число: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        goto error;
    }
    
    printf("Квадрат числа: %d\n", num * num);
    return 0;
    
error:
    printf("Ошибка: число должно быть положительным!\n");
    return 1;
}