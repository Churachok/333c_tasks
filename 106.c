#include <stdio.h>

int main() {
    int N;
    unsigned long long factorial = 1;
    
    printf("Введите число: ");
    scanf("%d", &N);
    
    int i = 1;
    while (i <= N) {
        factorial *= i;
        i++;
    }
    
    printf("%d! = %llu\n", N, factorial);
    return 0;
}