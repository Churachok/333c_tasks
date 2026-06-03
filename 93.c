#include <stdio.h>

int main() {
    int N;
    printf("Введите число: ");
    scanf("%d", &N);
    
    printf("Делители %d: ", N);
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}