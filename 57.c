#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num > 0 && num % 2 != 0) {
        printf("Число положительное и нечётное\n");
    } else {
        printf("Условие не выполнено\n");
    }
    return 0;
}