#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char position[50];
    double salary;
} Employee;

void printEmployee(Employee e) {
    printf("Сотрудник: %s\n", e.name);
    printf("Должность: %s\n", e.position);
    printf("Зарплата: %.2f\n", e.salary);
}

int main() {
    Employee emp = {"Сергей Иванов", "Программист", 75000.0};
    printEmployee(emp);
    return 0;
}