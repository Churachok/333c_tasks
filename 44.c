#include <stdio.h>

int main() {
    int c;
    printf("Введите текст (Ctrl+D для окончания):\n");
    
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}