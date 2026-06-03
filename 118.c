#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    
    int temp = num;
    while (temp > 1 && temp % 2 == 0) {
        temp /= 2;
    }
    
    if (temp == 1 && num > 0) {
        printf("%d - степень двойки\n", num);
    } else {
        printf("%d - не степень двойки\n", num);
    }
    return 0;
}