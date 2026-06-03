#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 10; i <= 99; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    
    printf("Сумма двузначных чисел, кратных 3: %d\n", sum);
    return 0;
}