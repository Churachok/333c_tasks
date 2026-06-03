#include <stdio.h>

int main() {
    int N, a = 0, b = 1, c;
    printf("Введите N: ");
    scanf("%d", &N);
    
    printf("Числа Фибоначчи меньше %d: ", N);
    
    while (a < N) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}