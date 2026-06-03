#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 7;
    
    if ((a < b && b > c) || (a == c) || (b - a > c)) {
        printf("Сложное условие истинно\n");
        printf("a=%d, b=%d, c=%d\n", a, b, c);
    }
    return 0;
}