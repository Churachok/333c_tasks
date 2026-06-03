#include <stdio.h>

int main() {
    FILE *file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Файл не найден\n");
        return 1;
    }
    
    unsigned char buffer[16];
    int bytesRead;
    int offset = 0;
    
    printf("Шестнадцатеричный дамп:\n");
    while ((bytesRead = fread(buffer, 1, 16, file)) > 0) {
        printf("%08X: ", offset);
        
        for (int i = 0; i < bytesRead; i++) {
            printf("%02X ", buffer[i]);
        }
        
        for (int i = bytesRead; i < 16; i++) {
            printf("   ");
        }
        
        printf(" ");
        for (int i = 0; i < bytesRead; i++) {
            printf("%c", (buffer[i] >= 32 && buffer[i] <= 126) ? buffer[i] : '.');
        }
        printf("\n");
        offset += bytesRead;
    }
    
    fclose(file);
    return 0;
}