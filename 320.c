#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        file = fopen("data.csv", "w");
        fprintf(file, "Иван,25,Москва\n");
        fprintf(file, "Мария,30,СПб\n");
        fprintf(file, "Петр,28,Казань\n");
        fclose(file);
        file = fopen("data.csv", "r");
    }
    
    char line[256];
    printf("CSV таблица:\n");
    printf("Имя      | Возраст | Город\n");
    printf("---------|---------|-------\n");
    
    while (fgets(line, sizeof(line), file)) {
        char name[50], city[50];
        int age;
        
        // Убираем символ новой строки
        line[strcspn(line, "\n")] = '\0';
        
        char *token = strtok(line, ",");
        strcpy(name, token);
        
        token = strtok(NULL, ",");
        age = atoi(token);
        
        token = strtok(NULL, ",");
        strcpy(city, token);
        
        printf("%-8s | %-7d | %s\n", name, age, city);
    }
    
    fclose(file);
    return 0;
}