#include <stdio.h>
#include <stdbool.h>

bool isVowel(char c) {
    c = (c >= 'A' && c <= 'Z') ? c + 32 : c;
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeVowels(char *str) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char text[] = "Hello World";
    printf("До: %s\n", text);
    removeVowels(text);
    printf("После: %s\n", text);
    return 0;
}