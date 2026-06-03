#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    int count = 0;
    char ch;
    
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }
    
    printf("Количество символов в файле: %d\n", count);
    fclose(file);
    return 0;
}