#include <stdio.h>
#include <stdbool.h>

int countWords(const char *str) {
    int count = 0;
    bool inWord = false;
    
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

int main() {
    char text[] = "  Hello   world from   C   programming  ";
    printf("Количество слов: %d\n", countWords(text));
    return 0;
}