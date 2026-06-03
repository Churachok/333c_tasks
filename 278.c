#include <stdio.h>

int setLowerNBits(int num, int n) {
    int mask = (1 << n) - 1;
    return num | mask;
}

int main() {
    int num = 0b10110000;  
    int n = 4;
    
    printf("Исходное: %08X (", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    int result = setLowerNBits(num, n);
    
    printf(")\nПосле установки младших %d битов: %08X (", n, result);
    for (int i = 7; i >= 0; i--) printf("%d", (result >> i) & 1);
    printf(")\n");
    
    return 0;
}