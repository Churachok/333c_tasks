#include <stdio.h>

void replaceSpaces(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }
}

int main() {
    char text[] = "Hello World from C";
    printf("До: %s\n", text);
    replaceSpaces(text);
    printf("После: %s\n", text);
    return 0;
}