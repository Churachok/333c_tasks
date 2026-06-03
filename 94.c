#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Введите N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        sum += i * i;
    }
    
    printf("Сумма квадратов: %d\n", sum);
    return 0;
}