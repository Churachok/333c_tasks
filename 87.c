#include <stdio.h>

int divide(int a, int b, int *result) {
    if (b == 0) {
        return -1;  
    }
    *result = a / b;
    return 0;  
}

int main() {
    int result;
    int status = divide(10, 0, &result);
    
    if (status == 0) {
        printf("Результат: %d\n", result);
    } else {
        printf("Ошибка: деление на ноль\n");
        return 1;
    }
    return 0;
}