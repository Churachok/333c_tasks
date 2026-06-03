#include <stdio.h>

int test1() {
    printf("test1 вызван\n");
    return 0;
}

int test2() {
    printf("test2 вызван\n");
    return 1;
}

int main() {
    printf("Результат: %d\n", test1() && test2());
    printf("Результат: %d\n", test2() || test1());
    return 0;
}