#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(const char *str1, const char *str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    
    char *result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) return NULL;
    
    strcpy(result, str1);
    strcat(result, str2);
    
    return result;
}

int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "World!";
    
    char *result = concatenateStrings(s1, s2);
    
    if (result != NULL) {
        printf("Результат: %s\n", result);
        free(result);
    }
    return 0;
}