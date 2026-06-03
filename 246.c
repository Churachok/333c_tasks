// Файл: main.c
#include <stdio.h>
#include "utils.h"

int main() {
    printf("Сумма: %d\n", add(5, 3));
    printf("Разность: %d\n", subtract(10, 4));
    return 0;
}

// Файл: utils.h
#ifndef UTILS_H
#define UTILS_H

int add(int a, int b);
int subtract(int a, int b);

#endif

// Файл: utils.c
#include "utils.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}