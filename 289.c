#include <stdio.h>

void copyString(char *dest, const char *src) {
    while ((*dest++ = *src++) != '\0');
}

int main() {
    char source[] = "Hello, World!";
    char destination[100];
    
    copyString(destination, source);
    
    printf("Исходная: %s\n", source);
    printf("Копия: %s\n", destination);
    return 0;
}