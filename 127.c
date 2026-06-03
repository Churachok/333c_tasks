#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w+");
    char name[50];
    int age;
    float height;
    
    fprintf(file, "Иван 25 175.5\n");
    fprintf(file, "Мария 30 165.0\n");
    rewind(file);
    printf("Данные из файла:\n");
    while (fscanf(file, "%s %d %f", name, &age, &height) == 3) {
        printf("Имя: %s, Возраст: %d, Рост: %.1f\n", name, age, height);
    }
    
    fclose(file);
    return 0;
}