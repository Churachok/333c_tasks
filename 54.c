#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d - чётное\n", num);
    } else {
        printf("%d - нечётное\n", num);
    }
    return 0;
}