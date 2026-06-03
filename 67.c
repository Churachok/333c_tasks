#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Пропускаем 5 (continue)\n");
            continue;  
        }
        if (i == 8) {
            printf("Останавливаемся на 8 (break)\n");
            break; 
        }
        printf("i = %d\n", i);
    }
    return 0;
}