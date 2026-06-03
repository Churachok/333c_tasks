#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void printCapitalizedWords(const char *str) {
    bool inWord = false;
    bool capitalize = false;
    
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                inWord = true;
                if (isupper(str[i])) {
                    capitalize = true;
                } else {
                    capitalize = false;
                }
            }
            if (capitalize) {
                putchar(str[i]);
            }
        } else {
            if (inWord && capitalize) {
                printf("\n");
            }
            inWord = false;
        }
    }
    if (inWord && capitalize) {
        printf("\n");
    }
}

int main() {
    char text[] = "Hello world Apple banana Python java C Language";
    printf("Слова с заглавной буквы:\n");
    printCapitalizedWords(text);
    return 0;
}