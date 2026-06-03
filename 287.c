#include <stdio.h>

int firstIndexOf(const char *str, char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main() {
    char str[100];
    char ch;
    
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    printf("Введите символ для поиска: ");
    scanf("%c", &ch);
    
    int index = firstIndexOf(str, ch);
    
    if (index != -1) {
        printf("Символ '%c' найден на позиции %d\n", ch, index);
    } else {
        printf("Символ '%c' не найден\n", ch);
    }
    return 0;
}