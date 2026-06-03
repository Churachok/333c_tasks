#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Использование: %s файл1 [файл2 ...]\n", argv[0]);
        return 1;
    }
    
    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "r");
        if (file == NULL) {
            printf("Ошибка: файл '%s' не найден\n", argv[i]);
            continue;
        }
        
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }
        fclose(file);
    }
    return 0;
}