#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    size_t count = sizeof(array) / sizeof(array[0]);
    printf("Элементов в массиве: %zu\n", count);
    return 0;
}