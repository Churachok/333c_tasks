#include <stdio.h>

int main() {
    int num = 255;
    printf("Десятичный: %d\n", num);
    printf("Шестнадцатеричный: %x\n", num);
    printf("Восьмеричный: %o\n", num);
    printf("Двоичного формата нет в stdio\n");
    return 0;
}