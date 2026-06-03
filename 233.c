#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    char **lines = NULL;
    int count = 0;
    char buffer[256];
    
    while (fgets(buffer, sizeof(buffer), file)) {
        buffer[strcspn(buffer, "\n")] = '\0';
        
        lines = (char**)realloc(lines, (count + 1) * sizeof(char*));
        lines[count] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(lines[count], buffer);
        count++;
    }
    
    fclose(file);
    
    printf("Содержимое файла:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", lines[i]);
        free(lines[i]);
    }
    free(lines);
    
    return 0;
}