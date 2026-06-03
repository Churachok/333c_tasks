#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Введите номер числа Фибоначчи: ");
    scanf("%d", &n);
    
    printf("F(%d) = %d\n", n, fibonacci(n));
    return 0;
}