#include <stdio.h>

void concatStrings(char *dest, const char *src) {

    while (*dest != '\0') {
        dest++;
    }

    while ((*dest++ = *src++) != '\0');
}

int main() {
    char str1[200] = "Hello, ";
    char str2[] = "World!";
    
    concatStrings(str1, str2);
    
    printf("Результат: %s\n", str1);
    return 0;
}