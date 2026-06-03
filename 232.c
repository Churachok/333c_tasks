#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Введите количество строк: ");
    scanf("%d", &n);
    getchar(); 
    
    char **strings = (char**)malloc(n * sizeof(char*));
    
    for (int i = 0; i < n; i++) {
        char buffer[256];
        printf("Введите строку %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        
        strings[i] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(strings[i], buffer);
    }
    
    printf("\nВведённые строки:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %s\n", i + 1, strings[i]);
        free(strings[i]);
    }
    free(strings);
    
    return 0;
}