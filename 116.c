#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;
    
    printf("Вводите положительные числа (отрицательное для завершения):\n");
    
    while (1) {
        scanf("%d", &num);
        if (num < 0) break;
        sum += num;
        count++;
    }
    
    if (count > 0) {
        printf("Среднее арифметическое: %.2f\n", (float)sum / count);
    }
    return 0;
}