#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int splitString(const char *str, char **words, int maxWords) {
    char buffer[256];
    strcpy(buffer, str);
    int count = 0;
    char *token = strtok(buffer, " \t\n");
    
    while (token != NULL && count < maxWords) {
        words[count] = malloc(strlen(token) + 1);
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " \t\n");
    }
    return count;
}

int main() {
    char text[] = "Hello world from C programming";
    char *words[10];
    
    int count = splitString(text, words, 10);
    
    printf("Слова:\n");
    for (int i = 0; i < count; i++) {
        printf("%d: %s\n", i + 1, words[i]);
        free(words[i]);
    }
    return 0;
}