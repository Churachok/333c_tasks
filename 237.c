#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float grade;
} Student;

int main() {
    int n = 3;
    Student *students = (Student*)malloc(n * sizeof(Student));
    
    strcpy(students[0].name, "Иван");
    students[0].grade = 4.5;
    
    strcpy(students[1].name, "Мария");
    students[1].grade = 4.8;
    
    strcpy(students[2].name, "Петр");
    students[2].grade = 4.2;
    
    printf("Список студентов:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.1f\n", students[i].name, students[i].grade);
    }
    
    free(students);
    return 0;
}