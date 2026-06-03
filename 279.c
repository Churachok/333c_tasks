#include <stdio.h>

int keepUpperKBits(int num, int k, int totalBits) {
    int mask = ((1 << k) - 1) << (totalBits - k);
    return num & mask;
}

int main() {
    int num = 0b10111010;  
    int k = 3;
    int totalBits = 8;
    
    printf("Исходное: %08X (", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    int result = keepUpperKBits(num, k, totalBits);
    
    printf(")\nПосле очистки всех битов кроме %d старших: %08X (", k, result);
    for (int i = 7; i >= 0; i--) printf("%d", (result >> i) & 1);
    printf(")\n");
    
    return 0;
}