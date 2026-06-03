#include <stdio.h>
#include <string.h>

#define VERSION "1.0.0"

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0) {
            printf("Программа-пример с поддержкой --help и --version\n");
            printf("Использование: %s [--help] [--version]\n", argv[0]);
            return 0;
        }
        if (strcmp(argv[i], "--version") == 0) {
            printf("Версия программы: %s\n", VERSION);
            return 0;
        }
    }
    
    printf("Запуск программы...\n");
    printf("Используйте --help для справки\n");
    return 0;
}