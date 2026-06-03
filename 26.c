// Компилировать: gcc -std=c11 program.c
#include <stdio.h>

int main() {
    auto int x = 10;  
    auto double y = 3.14;
    auto char c = 'A';
    
    printf("x = %d, y = %.2f, c = %c\n", x, y, c);
    return 0;
}