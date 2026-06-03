#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Введите N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    
    printf("Сумма от 1 до %d = %d\n", N, sum);
    return 0;
}