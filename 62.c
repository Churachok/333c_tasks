#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b && b < c) {
        printf("Числа строго возрастают\n");
    } else if (a <= b && b <= c) {
        printf("Числа не убывают\n");
    } else {
        printf("Числа не возрастают\n");
    }
    return 0;
}