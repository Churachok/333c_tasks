#include <stdio.h>
#include <string.h>

int main() {
    const char *password = "qwerty123";
    char input[50];
    
    while (1) {
        printf("Введите пароль: ");
        scanf("%49s", input);
        
        if (strcmp(input, password) == 0) {
            printf("Доступ разрешён!\n");
            break;
        } else {
            printf("Неверный пароль, попробуйте снова\n");
        }
    }
    return 0;
}