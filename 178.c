#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void updateStudent(struct Student *s, const char *name, int age, float grade) {
    strcpy(s->name, name);
    s->age = age;
    s->grade = grade;
}

int main() {
    struct Student s = {"Анна", 18, 4.0};
    
    printf("До: %s, %d, %.1f\n", s.name, s.age, s.grade);
    updateStudent(&s, "Анна Смирнова", 19, 4.7);
    printf("После: %s, %d, %.1f\n", s.name, s.age, s.grade);
    return 0;
}