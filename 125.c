#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    char line[256];
    
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    fclose(file);
    return 0;
}