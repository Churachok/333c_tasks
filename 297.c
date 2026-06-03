#include <stdio.h>


static inline int square(int x) {
    return x * x;
}

static inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 5, b = 10;
    
    printf("square(%d) = %d\n", a, square(a));
    printf("max(%d, %d) = %d\n", a, b, max(a, b));
    
    printf("\ninline - уменьшает накладные расходы на вызов функций\n");
    return 0;
}