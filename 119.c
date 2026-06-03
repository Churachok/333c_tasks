#include <stdio.h>

int main() {
    int N, count = 0, sum = 0, num = 1;
    printf("Введите N: ");
    scanf("%d", &N);
    
    while (count < N) {
        if (num % 3 == 0 || num % 5 == 0) {
            sum += num;
            count++;
        }
        num++;
    }
    
    printf("Сумма первых %d чисел, кратных 3 или 5: %d\n", N, sum);
    return 0;
}