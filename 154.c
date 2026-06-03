#include <stdio.h>

int main() {
    int N;
    printf("Введите N: ");
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
    
    printf("Массив: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}