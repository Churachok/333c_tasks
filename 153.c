#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    void (*speak)(void);
} Animal;

void dogSpeak() { printf("Гав-гав!\n"); }
void catSpeak() { printf("Мяу-мяу!\n"); }
void cowSpeak() { printf("Му-му!\n"); }

int main() {
    Animal animals[3] = {
        {"Собака", dogSpeak},
        {"Кошка", catSpeak},
        {"Корова", cowSpeak}
    };
    
    for (int i = 0; i < 3; i++) {
        printf("%s говорит: ", animals[i].name);
        animals[i].speak();
    }
    
    return 0;
}