#include <stdio.h>

int main() {
    printf("x\t y = 2x + 3\n");
    printf("----------------\n");
    
    for (int x = -5; x <= 5; x++) {
        printf("%d\t %d\n", x, 2 * x + 3);
    }
    return 0;
}