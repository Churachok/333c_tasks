#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    printf("Максимум %d и %d: %d\n", x, y, MAX(x, y));
    printf("Максимум 5.5 и 3.2: %.1f\n", MAX(5.5, 3.2));
    return 0;
}