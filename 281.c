#include <stdio.h>

int swapBitsPosition(int num, int n, int m) {
    int bitN = (num >> n) & 1;
    int bitM = (num >> m) & 1;
    
    if (bitN != bitM) {
        num ^= (1 << n);
        num ^= (1 << m);
    }
    return num;
}

void printBits(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    int num = 0b10101010;
    int n = 1, m = 4;
    
    printf("Исходное: ");
    printBits(num);
    printf(" (%d)\n", num);
    
    num = swapBitsPosition(num, n, m);
    
    printf("После обмена битов %d и %d: ", n, m);
    printBits(num);
    printf(" (%d)\n", num);
    
    return 0;
}