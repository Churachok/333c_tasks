#include <stdio.h>

#define SWAP(a, b, type) do { \
    type temp = a; \
    a = b; \
    b = temp; \
} while(0)

int main() {
    int x = 5, y = 10;
    double dx = 3.14, dy = 2.71;
    
    printf("До: x=%d, y=%d\n", x, y);
    SWAP(x, y, int);
    printf("После: x=%d, y=%d\n", x, y);
    
    printf("До: dx=%.2f, dy=%.2f\n", dx, dy);
    SWAP(dx, dy, double);
    printf("После: dx=%.2f, dy=%.2f\n", dx, dy);
    return 0;
}