#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Вводите числа (0 для завершения):\n");
    
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (num % 2 == 0) {
            sum += num;
        }
    }
    
    printf("Сумма чётных чисел: %d\n", sum);
    return 0;
}