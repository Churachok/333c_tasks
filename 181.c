#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int main() {
    Student s1;
    strcpy(s1.name, "Дмитрий");
    s1.age = 21;
    s1.grade = 4.3;
    
    printf("Имя: %s, Возраст: %d, Оценка: %.1f\n", s1.name, s1.age, s1.grade);
    return 0;
}