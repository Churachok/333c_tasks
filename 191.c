#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    float average;
} Student;

void sortStudents(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    Student students[] = {
        {"Иван", 4.2},
        {"Мария", 4.8},
        {"Петр", 4.5},
        {"Анна", 4.9}
    };
    int n = sizeof(students) / sizeof(students[0]);
    
    sortStudents(students, n);
    
    printf("Студенты по убыванию среднего балла:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.1f\n", students[i].name, students[i].average);
    }
    return 0;
}