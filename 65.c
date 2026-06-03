#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;
    printf("Введите N: ");
    scanf("%d", &N);
    
    while (i <= N) {
        sum += i;
        i++;
    }
    
    printf("Сумма от 1 до %d = %d\n", N, sum);
    return 0;
}