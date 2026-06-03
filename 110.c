#include <stdio.h>
#include <limits.h>

int main() {
    int num, min = INT_MAX, max = INT_MIN;
    
    printf("Вводите числа (0 для завершения):\n");
    
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        
        if (num < min) min = num;
        if (num > max) max = num;
    }
    
    if (min != INT_MAX) {
        printf("Минимум: %d\n", min);
        printf("Максимум: %d\n", max);
    }
    return 0;
}