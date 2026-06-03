#include <stdio.h>

int main() {
    int x;  // Неинициализирована
    printf("x = %d\n", x);  // Неопределённое поведение
    
    // Valgrind покажет: Conditional jump or move depends on uninitialised value
    return 0;
}

// valgrind --track-origins=yes ./program