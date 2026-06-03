#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[256];
    printf("Введите текст: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    
    char *str = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(str, buffer);
    
    printf("Сохранённая строка: %s\n", str);
    
    free(str);
    return 0;
}