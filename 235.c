#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **names = NULL;
    int count = 0;
    int choice;
    
    while (1) {
        printf("\n1 - Добавить имя\n");
        printf("2 - Показать имена\n");
        printf("3 - Выход\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        getchar();
        
        if (choice == 1) {
            char buffer[100];
            printf("Введите имя: ");
            fgets(buffer, sizeof(buffer), stdin);
            buffer[strcspn(buffer, "\n")] = '\0';
            
            names = (char**)realloc(names, (count + 1) * sizeof(char*));
            names[count] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
            strcpy(names[count], buffer);
            count++;
            printf("Имя добавлено!\n");
        } else if (choice == 2) {
            printf("\nСписок имён:\n");
            for (int i = 0; i < count; i++) {
                printf("%d. %s\n", i + 1, names[i]);
            }
        } else if (choice == 3) {
            break;
        }
    }
    
    for (int i = 0; i < count; i++) {
        free(names[i]);
    }
    free(names);
    
    return 0;
}