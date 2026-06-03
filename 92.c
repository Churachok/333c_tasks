#include <stdio.h>

int main() {
    int N, count = 0;
    printf("Введите N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }
    
    printf("Нечётных чисел от 1 до %d: %d\n", N, count);
    return 0;
}