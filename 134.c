#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        
        if (ch == '\n') {
            lines++;
        }
        
        if (!isspace(ch) && !inWord) {
            words++;
            inWord = 1;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }
    
    printf("Символов: %d\n", chars);
    printf("Слов: %d\n", words);
    printf("Строк: %d\n", lines);
    
    fclose(file);
    return 0;
}