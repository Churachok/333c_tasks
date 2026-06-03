#include <stdio.h>

void hello() { printf("Привет!\n"); }
void goodbye() { printf("Пока!\n"); }
void info() { printf("Это программа на C\n"); }

int main() {
    void (*functions[])(void) = {hello, goodbye, info};
    int choice;
    
    printf("Выберите функцию (0-2): ");
    scanf("%d", &choice);
    
    if (choice >= 0 && choice <= 2) {
        functions[choice]();
    }
    
    return 0;
}