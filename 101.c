#include <stdio.h>

int main() {
    int K;
    printf("Введите K: ");
    scanf("%d", &K);
    
    printf("Двузначные числа с суммой цифр %d:\n", K);
    
    for (int i = 10; i <= 99; i++) {
        int sum = (i / 10) + (i % 10);
        if (sum == K) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}