#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student student1;
    
    strcpy(student1.name, "Иван Петров");
    student1.age = 20;
    student1.grade = 4.5;
    
    printf("Студент:\n");
    printf("Имя: %s\n", student1.name);
    printf("Возраст: %d\n", student1.age);
    printf("Оценка: %.1f\n", student1.grade);
    return 0;
}