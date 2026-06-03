#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Введите число: ");
    scanf("%d", &num);
    
    int temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    
    if (num == 0) count = 1;
    
    printf("В числе %d цифр: %d\n", num, count);
    return 0;
}