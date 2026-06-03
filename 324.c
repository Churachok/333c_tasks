#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* replaceSubstring(const char *str, const char *oldSub, const char *newSub) {
    char *result = (char*)malloc(1024);
    char *ptr = result;
    const char *current = str;
    int oldLen = strlen(oldSub);
    int newLen = strlen(newSub);
    
    while (*current) {
        if (strncmp(current, oldSub, oldLen) == 0) {
            strcpy(ptr, newSub);
            ptr += newLen;
            current += oldLen;
        } else {
            *ptr++ = *current++;
        }
    }
    *ptr = '\0';
    
    return result;
}

int main() {
    char text[] = "Hello world, world is beautiful";
    char *result = replaceSubstring(text, "world", "C");
    
    printf("Исходная: %s\n", text);
    printf("Результат: %s\n", result);
    
    free(result);
    return 0;
}