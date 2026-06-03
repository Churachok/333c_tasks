#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee emp1 = {1, "Иван Петров", 50000.0};
    Employee emp2;
    FILE *file = fopen("employee.dat", "wb");
    fwrite(&emp1, sizeof(Employee), 1, file);
    fclose(file);
    file = fopen("employee.dat", "rb");
    fread(&emp2, sizeof(Employee), 1, file);
    fclose(file);
    
    printf("Загруженные данные:\n");
    printf("ID: %d, Имя: %s, Зарплата: %.2f\n", 
           emp2.id, emp2.name, emp2.salary);
    return 0;
}