#include <stdio.h>

void changeCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; 
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; 
        }
    }
}
int main() {
    char text[] = "Hello World!";
    printf("Исходная: %s\n", text);
    changeCase(text);
    printf("Изменённая: %s\n", text);
    return 0;
}