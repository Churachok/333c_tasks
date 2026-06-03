#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    void (*action)(void);
} MenuItem;

void actionNew() { printf("Создание нового файла\n"); }
void actionOpen() { printf("Открытие файла\n"); }
void actionSave() { printf("Сохранение файла\n"); }
void actionExit() { printf("Выход из программы\n"); }

int main() {
    MenuItem menu[] = {
        {"Новый", actionNew},
        {"Открыть", actionOpen},
        {"Сохранить", actionSave},
        {"Выход", actionExit}
    };
    int count = sizeof(menu) / sizeof(menu[0]);
    
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, menu[i].name);
    }
    
    int choice;
    printf("Выберите пункт: ");
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= count) {
        menu[choice - 1].action();
    }
    return 0;
}