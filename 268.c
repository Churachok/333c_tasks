#include <stdio.h>

int setBit(int num, int position) {
    return num | (1 << position);
}

int main() {
    int num = 0b00000000;
    int pos = 3;
    
    printf("Исходное число: %d (биты: ", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    num = setBit(num, pos);
    
    printf(")\nПосле установки бита %d: %d (биты: ", pos, num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    printf(")\n");
    
    return 0;
}