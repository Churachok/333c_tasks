#include <stdio.h>

int main() {
    int choice;
    
    printf("Меню:\n");
    printf("1 - Приветствие\n");
    printf("2 - Информация\n");
    printf("3 - Выход\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Привет!\n");
            break;
        case 2:
            printf("Это пример меню\n");
            break;
        case 3:
            printf("До свидания!\n");
            break;
    }
    return 0;
}