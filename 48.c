#include <stdio.h>

size_t my_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char text[] = "Hello, World!";
    printf("Длина строки: %zu\n", my_strlen(text));
    return 0;
}