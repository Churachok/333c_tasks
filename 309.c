#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <строка>\n", argv[0]);
        return 1;
    }
    
    char str[256];
    strcpy(str, argv[1]);
    
    reverseString(str);
    printf("Перевёрнутая строка: %s\n", str);
    return 0;
}