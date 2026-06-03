#include <stdio.h>

void func1() { printf("Функция 1\n"); }
void func2() { printf("Функция 2\n"); }
void func3() { printf("Функция 3\n"); }

int main() {
    void (*funcs[])(void) = {func1, func2, func3};
    int count = sizeof(funcs) / sizeof(funcs[0]);
    
    for (int i = 0; i < count; i++) {
        printf("Вызов %d: ", i + 1);
        funcs[i]();
    }
    return 0;
}