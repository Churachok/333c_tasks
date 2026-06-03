#include <stdio.h>

int main() {
    FILE *source = fopen("output.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char ch;
    
    if (source == NULL || dest == NULL) {
        printf("Ошибка открытия файлов\n");
        return 1;
    }
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    
    printf("Файл скопирован\n");
    fclose(source);
    fclose(dest);
    return 0;
}