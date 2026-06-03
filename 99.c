#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Введите число: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num && num > 0) {
        printf("%d - совершенное число\n", num);
    } else {
        printf("%d - не совершенное число\n", num);
    }
    return 0;
}