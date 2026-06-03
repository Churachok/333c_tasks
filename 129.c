#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int main() {
    FILE *file = fopen("student.dat", "wb+");
    Student s1 = {"Алексей", 20, 4.5};
    Student s2;
    

    fwrite(&s1, sizeof(Student), 1, file);
    rewind(file);
    fread(&s2, sizeof(Student), 1, file);
    printf("Загруженные данные:\n");
    printf("Имя: %s, Возраст: %d, Оценка: %.1f\n", s2.name, s2.age, s2.grade);
    
    fclose(file);
    return 0;
}