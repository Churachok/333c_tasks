#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student students[3] = {
        {"Иван", 20, 4.5},
        {"Мария", 21, 4.8},
        {"Петр", 19, 4.2}
    };
    
    printf("Список студентов:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s, %d лет, оценка %.1f\n", 
               i + 1, students[i].name, students[i].age, students[i].grade);
    }
    return 0;
}