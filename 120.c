#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    
    if (file == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    
    fprintf(file, "Hello, World!\n");
    fprintf(file, "Это текст, записанный в файл.\n");
    
    fclose(file);
    printf("Данные записаны в файл output.txt\n");
    return 0;
}