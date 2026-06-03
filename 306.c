#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Количество аргументов: %d\n", argc);
    printf("Имя программы: %s\n", argv[0]);
    
    for (int i = 1; i < argc; i++) {
        printf("Аргумент %d: %s\n", i, argv[i]);
    }
    return 0;
}