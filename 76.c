#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("Чётное\n");
    } else {
        printf("Нечётное\n");
    }
    return 0;
}