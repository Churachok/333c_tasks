#include <stdio.h>
#include <string.h>

int main() {
    const char *password = "secret123";
    char input[50];
    int attempts = 3;
    
    while (attempts > 0) {
        printf("Введите пароль (осталось попыток: %d): ", attempts);
        scanf("%49s", input);
        
        if (strcmp(input, password) == 0) {
            printf("Доступ разрешён!\n");
            return 0;
        }
        attempts--;
    }
    
    printf("Доступ заблокирован!\n");
    return 0;
}