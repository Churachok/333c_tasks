#include <stdio.h>

void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

int main() {
    char text[] = "Hello World!";
    printf("До: %s\n", text);
    toUpperCase(text);
    printf("После: %s\n", text);
    return 0;
}