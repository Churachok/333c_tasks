#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    char ch;
    
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    while (!feof(file)) {
        ch = fgetc(file);
        if (!feof(file)) {
            putchar(ch);
        }
    }
    
    fclose(file);
    return 0;
}