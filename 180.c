#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int age;
    float grade;
    struct Date birthDate;
};

int main() {
    struct Student s = {"Ольга", 20, 4.6, {15, 5, 2004}};
    
    printf("Студент: %s\n", s.name);
    printf("Дата рождения: %02d.%02d.%d\n",  s.birthDate.day, s.birthDate.month, s.birthDate.year);
    return 0;
}