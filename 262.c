#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *files[] = {"file1.txt", "file2.txt", "file3.txt"};
    int numFiles = 3;
    
    FILE *output = fopen("merged.txt", "w");
    if (output == NULL) {
        printf("Ошибка создания выходного файла\n");
        return 1;
    }
    
    for (int i = 0; i < numFiles; i++) {
        FILE *input = fopen(files[i], "r");
        if (input == NULL) {
            printf("Предупреждение: файл %s не найден\n", files[i]);
            continue;
        }
        
        char ch;
        while ((ch = fgetc(input)) != EOF) {
            fputc(ch, output);
        }
        fputc('\n', output);
        fclose(input);
        printf("Файл %s добавлен\n", files[i]);
    }
    
    fclose(output);
    printf("Файлы объединены в merged.txt\n");
    return 0;
}