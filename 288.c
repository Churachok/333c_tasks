#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Количество гласных: %d\n", countVowels(str));
    return 0;
}