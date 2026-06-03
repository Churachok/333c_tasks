#include <stdio.h>

int main() {
    int a, b;
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);
    
    int max = (a > b) ? a : b;
    printf("Максимум: %d\n", max);
    
    char *message = (a == b) ? "Числа равны" : "Числа не равны";
    printf("%s\n", message);
    return 0;
}