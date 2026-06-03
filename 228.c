#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strdup_custom(const char *str) {
    if (str == NULL) return NULL;
    
    size_t len = strlen(str) + 1;
    char *copy = (char*)malloc(len);
    
    if (copy != NULL) {
        strcpy(copy, str);
    }
    return copy;
}

int main() {
    const char *original = "Hello, Dynamic Memory!";
    char *copy = strdup_custom(original);
    
    if (copy != NULL) {
        printf("Оригинал: %s\n", original);
        printf("Копия: %s\n", copy);
        free(copy);
    }
    return 0;
}