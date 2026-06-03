#include <stdio.h>

int main() {
    int choice;
    
    printf("Меню:\n");
    printf("1 - Приветствие\n");
    printf("2 - Информация\n");
    printf("3 - Выход\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Привет!\n");
    } else if (choice == 2) {
        printf("Это пример меню\n");
    } else if (choice == 3) {
        printf("До свидания!\n");
    }
    return 0;
}