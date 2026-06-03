#include <stdio.h>

int toggleBit(int num, int position) {
    return num ^ (1 << position);
}

int main() {
    int num = 0b00001000;
    int pos = 3;
    
    printf("Исходное: %02X (", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    num = toggleBit(num, pos);
    printf(")\nПосле переворота бита %d: %02X (", pos, num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    num = toggleBit(num, pos);
    printf(")\nЕщё раз: %02X (", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    printf(")\n");
    
    return 0;
}