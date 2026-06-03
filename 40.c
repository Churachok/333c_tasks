#include <stdio.h>

int main() {
    char str[100];
    printf("Введите строку: ");
    scanf("%99s", str);
    printf("Вы ввели: %s\n", str);
    return 0;
}