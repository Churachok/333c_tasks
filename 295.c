// Файл: static_demo.c
#include <stdio.h>

static void internalFunction() {
    printf("Это внутренняя функция\n");
}


void publicFunction() {
    printf("Это публичная функция\n");
    internalFunction();  
}

int main() {
    publicFunction();
    // internalFunction();
    return 0;
}