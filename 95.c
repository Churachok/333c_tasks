#include <stdio.h>

int main() {
    int M, N;
    printf("Введите высоту M и ширину N: ");
    scanf("%d %d", &M, &N);
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}