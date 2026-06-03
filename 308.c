#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <число>\n", argv[0]);
        return 1;
    }
    
    int n = atoi(argv[1]);
    if (n < 0) {
        printf("Факториал определён только для неотрицательных чисел\n");
        return 1;
    }
    
    printf("%d! = %llu\n", n, factorial(n));
    return 0;
}