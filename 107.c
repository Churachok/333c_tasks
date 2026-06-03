#include <stdio.h>

int main() {
    int num, i = 2, isPrime = 1;
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num < 2) {
        isPrime = 0;
    }
    
    while (i * i <= num && isPrime) {
        if (num % i == 0) {
            isPrime = 0;
        }
        i++;
    }
    
    if (isPrime) {
        printf("%d - простое число\n", num);
    } else {
        printf("%d - составное число\n", num);
    }
    return 0;
}