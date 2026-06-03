#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Использование: %s слово1 слово2 ...\n", argv[0]);
        return 1;
    }
    
    char *search = "ключ";
    
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], search) == 0) {
            printf("Слово '%s' найдено на позиции %d\n", search, i);
            return 0;
        }
    }
    
    printf("Слово '%s' не найдено\n", search);
    return 0;
}