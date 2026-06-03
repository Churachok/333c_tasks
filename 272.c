#include <stdio.h>

int swapBits(int num, int pos1, int pos2) {
    int bit1 = (num >> pos1) & 1;
    int bit2 = (num >> pos2) & 1;
    
    if (bit1 != bit2) {
        num ^= (1 << pos1);
        num ^= (1 << pos2);
    }
    return num;
}

void printBits(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    int num = 0b00001111;  
    int pos1 = 0, pos2 = 3;
    
    printf("Исходное: ");
    printBits(num);
    printf(" (%d)\n", num);
    
    num = swapBits(num, pos1, pos2);
    
    printf("После обмена битов %d и %d: ", pos1, pos2);
    printBits(num);
    printf(" (%d)\n", num);
    
    return 0;
}