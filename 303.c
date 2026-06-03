#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Использование: %s <имя>\n", argv[0]);
        return 1;
    }
    
    printf("Привет, %s!\n", argv[1]);
    return 0;
}