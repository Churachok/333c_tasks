#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person *p = (Person*)malloc(sizeof(Person));
    
    if (p == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    strcpy(p->name, "Алексей");
    p->age = 25;
    
    printf("Имя: %s\n", p->name);
    printf("Возраст: %d\n", p->age);
    
    free(p);
    return 0;
}