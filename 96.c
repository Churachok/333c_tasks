#include <stdio.h>

int main() {
    int N;
    printf("Введите N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}