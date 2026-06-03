#include <stdio.h>
#include <ctype.h>

void caesarEncrypt(char *text, int shift) {
    shift = shift % 26;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper(text[i])) {
            text[i] = 'A' + (text[i] - 'A' + shift) % 26;
        } else if (islower(text[i])) {
            text[i] = 'a' + (text[i] - 'a' + shift) % 26;
        }
    }
}

void caesarDecrypt(char *text, int shift) {
    caesarEncrypt(text, 26 - (shift % 26));
}

int main() {
    char message[256];
    int shift;
    
    printf("Введите сообщение: ");
    fgets(message, sizeof(message), stdin);
    printf("Введите сдвиг: ");
    scanf("%d", &shift);
    
    caesarEncrypt(message, shift);
    printf("Зашифрованное: %s", message);
    
    caesarDecrypt(message, shift);
    printf("Расшифрованное: %s", message);
    
    return 0;
}