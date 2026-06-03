#include <stdio.h>

int main() {
    int N;
    printf("Введите N: ");
    scanf("%d", &N);
    
    printf("Совершенные числа от 2 до %d:\n", N);
    
    for (int num = 2; num <= N; num++) {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}