#include <stdio.h>
#include <string.h>

char* toBase(int num, int base, char *result) {
    static const char digits[] = "0123456789ABCDEF";
    char buffer[64];
    int idx = 0;
    
    if (num == 0) {
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    
    while (num > 0) {
        buffer[idx++] = digits[num % base];
        num /= base;
    }
    
    for (int i = 0; i < idx; i++) {
        result[i] = buffer[idx - 1 - i];
    }
    result[idx] = '\0';
    
    return result;
}

int main() {
    int num;
    int base;
    char result[64];
    
    printf("Введите число: ");
    scanf("%d", &num);
    printf("Введите основание (2-16): ");
    scanf("%d", &base);
    
    if (base < 2 || base > 16) {
        printf("Основание должно быть от 2 до 16\n");
        return 1;
    }
    
    printf("%d в системе с основанием %d = %s\n", num, base, toBase(num, base, result));
    
    // Примеры
    printf("\nПримеры:\n");
    printf("255 в 16-чной: %s\n", toBase(255, 16, result));
    printf("255 в 8-чной: %s\n", toBase(255, 8, result));
    printf("255 в 2-чной: %s\n", toBase(255, 2, result));
    
    return 0;
}