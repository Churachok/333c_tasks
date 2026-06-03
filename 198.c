#include <stdio.h>

#define SWAP_T(type, a, b) do { \
    type _temp = a; \
    a = b; \
    b = _temp; \
} while(0)

int main() {
    int x = 10, y = 20;
    double dx = 3.14, dy = 2.71;
    char c1 = 'A', c2 = 'B';
    
    printf("int: %d, %d -> ", x, y);
    SWAP_T(int, x, y);
    printf("%d, %d\n", x, y);
    
    printf("double: %.2f, %.2f -> ", dx, dy);
    SWAP_T(double, dx, dy);
    printf("%.2f, %.2f\n", dx, dy);
    
    printf("char: %c, %c -> ", c1, c2);
    SWAP_T(char, c1, c2);
    printf("%c, %c\n", c1, c2);
    return 0;
}