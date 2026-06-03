// main.c
#include <stdio.h>
#include "utils.h"
#include "math.h"

int main() {
    printf("5 + 3 = %d\n", add(5, 3));
    printf("5 * 3 = %d\n", multiply(5, 3));
    return 0;
}

// Компиляция с библиотекой:
// gcc main.c -L. -lmylib -o program