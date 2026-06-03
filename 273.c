#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}


int countSetBitsFast(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}

int main() {
    int num = 0b01011011;  
    
    printf("Число: %d (0b", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    printf(")\n");
    printf("Установленных битов: %d\n", countSetBits(num));
    printf("Установленных битов (быстро): %d\n", countSetBitsFast(num));
    
    return 0;
}