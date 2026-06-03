#include <stdio.h>

int main() {
    char ch;
    printf("Введите символ: ");
    scanf("%c", &ch);
    
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        printf("Буква\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Цифра\n");
    } else {
        printf("Специальный символ\n");
    }
    return 0;
}