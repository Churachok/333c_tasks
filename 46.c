#include <stdio.h>

void removeSpaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char text[] = "Hello   World   from C!";
    printf("До: '%s'\n", text);
    removeSpaces(text);
    printf("После: '%s'\n", text);
    return 0;
}