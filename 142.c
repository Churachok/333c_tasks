#include <stdio.h>

int stringLength(const char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char text[] = "Hello, World!";
    printf("Длина строки '%s': %d\n", text, stringLength(text));
    return 0;
}