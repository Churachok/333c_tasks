#include <stdio.h>

int getLength(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    int len = getLength(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    
    printf("Длина строки: %d\n", getLength(str));
    return 0;
}