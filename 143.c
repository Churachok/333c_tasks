//prototype.h
#ifndef PROTOTYPE_H
#define PROTOTYPE_H

int add(int a, int b);

#endif
//functionc.c
#include "prototype.h"

int add(int a, int b) {
    return a + b;
}
//main.c
#include <stdio.h>
#include "prototype.h"

int main() {
    printf("Сумма: %d\n", add(5, 3));
    return 0;
}