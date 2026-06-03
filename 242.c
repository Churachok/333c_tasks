#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **lines = NULL;
    int count = 0;
    char buffer[256];
    
    printf("Введите строки (пустая строка для завершения):\n");
    
    while (1) {
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        
        if (strlen(buffer) == 0) break;
        
        lines = (char**)realloc(lines, (count + 1) * sizeof(char*));
        lines[count] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(lines[count], buffer);
        count++;
    }
    
    printf("\nСтроки в обратном порядке:\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s\n", lines[i]);
        free(lines[i]);
    }
    free(lines);
    
    return 0;
}