#include <stdio.h>

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

void printTable(int (*func)(int), int start, int end) {
    for (int x = start; x <= end; x++) {
        printf("f(%d) = %d\n", x, func(x));
    }
}

int main() {
    printf("Квадраты:\n");
    printTable(square, -5, 5);
    
    printf("\nКубы:\n");
    printTable(cube, -3, 3);
    
    return 0;
}