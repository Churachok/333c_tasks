#include <stdio.h>

void demoStatic() {
    static int staticVar = 0;
    int autoVar = 0;
    
    staticVar++;
    autoVar++;
    
    printf("static: %d, auto: %d\n", staticVar, autoVar);
}

int main() {
    printf("Статическая переменная сохраняет значение между вызовами:\n");
    for (int i = 0; i < 5; i++) {
        demoStatic();
    }
    return 0;
}