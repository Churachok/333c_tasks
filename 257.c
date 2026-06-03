#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    char ch;
    int words = 0, inWord = 0;
    
    while ((ch = fgetc(file)) != EOF) {
        if (!isspace(ch) && !inWord) {
            words++;
            inWord = 1;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }
    
    printf("Количество слов: %d\n", words);
    fclose(file);
    return 0;
}