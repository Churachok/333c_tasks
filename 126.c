#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    char ch;
    int words = 0;
    int inWord = 0;
    
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        if (!isspace(ch) && !inWord) {
            words++;
            inWord = 1;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }
    
    printf("Количество слов в файле: %d\n", words);
    fclose(file);
    return 0;
}