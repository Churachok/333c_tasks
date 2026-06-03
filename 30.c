#include <stdio.h>
#include <limits.h>

int main() {
    int max = INT_MAX;
    printf("Максимум: %d\n", max);
    printf("Переполнение: %d\n", max + 1); 
    return 0;
}