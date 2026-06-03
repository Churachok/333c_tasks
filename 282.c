#include <stdio.h>

int invertBits(int num) {
    return ~num;
}

int invertBits8bit(int num) {
    return (~num) & 0xFF;
}

int main() {
    int num = 0b10110010;  
    
    printf("Исходное: %08X (", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    int inverted = invertBits8bit(num);
    
    printf(")\nИнверсия всех битов (8 бит): %08X (", inverted);
    for (int i = 7; i >= 0; i--) printf("%d", (inverted >> i) & 1);
    printf(")\n");
    
    return 0;
}