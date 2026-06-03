#include <stdio.h>
#include <string.h>

int main() {
    char search[50];
    char line[256];
    int lineNum = 0;
    
    printf("Введите строку для поиска: ");
    scanf("%49s", search);
    
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), file)) {
        lineNum++;
        if (strstr(line, search) != NULL) {
            printf("%d: %s", lineNum, line);
        }
    }
    
    fclose(file);
    return 0;
}