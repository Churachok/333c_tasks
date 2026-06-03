#include <stdio.h>

int main() {
    int num = 0b10110010;  
    int shifts = 2;
    
    printf("Исходное: %d (0b", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    int result = num >> shifts;
    
    printf(")\nПосле сдвига вправо на %d: %d (0b", shifts, result);
    for (int i = 7; i >= 0; i--) printf("%d", (result >> i) & 1);
    printf(")\n");
    
    printf("\nОбъяснение: сдвиг вправо на %d = деление на 2^%d\n", shifts, shifts);
    printf("%d >> %d = %d (деление: %d / %d = %d)\n", 
           num, shifts, result, num, 1 << shifts, num / (1 << shifts));
    
    return 0;
}