#include <stdio.h>
#include <stdlib.h>

int main() {
    int M, N;
    printf("Введите количество строк M и столбцов N: ");
    scanf("%d %d", &M, &N);
    int **matrix = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));
    }
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = i * N + j + 1;
        }
    }
    printf("Матрица %dx%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < M; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}