#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;
    printf("Введите N: ");
    scanf("%d", &N);
    
    while (i <= N) {
        sum += i;
        i++;
    }
    
    printf("Сумма: %d\n", sum);
    return 0;
}