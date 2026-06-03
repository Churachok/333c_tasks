#include <stdio.h>
#include <stdbool.h>

bool isBitSet(int num, int position) {
    return (num >> position) & 1;
}

int main() {
    int num = 0b00001010;  
    int pos;
    
    printf("Число: %d (биты: ", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    printf(")\n\n");
    
    for (pos = 0; pos < 8; pos++) {
        printf("Бит %d: %s\n", pos, isBitSet(num, pos) ? "установлен" : "не установлен");
    }
    
    return 0;
}