#include <stdio.h>

int stringLength(const char *str) {
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
    
    int len = stringLength(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    
    printf("Длина строки: %d\n", len);
    return 0;
}