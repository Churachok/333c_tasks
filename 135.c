#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    
    printf("%d! = %llu (цикл)\n", n, factorial(n));
    printf("%d! = %llu (рекурсия)\n", n, factorialRecursive(n));
    
    return 0;
}