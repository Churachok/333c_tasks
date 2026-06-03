#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    
    printf("Введите исходный файл: ");
    scanf("%s", sourceFile);
    printf("Введите целевой файл: ");
    scanf("%s", destFile);
    
    FILE *source = fopen(sourceFile, "rb");
    if (source == NULL) {
        printf("Ошибка открытия исходного файла\n");
        return 1;
    }
    
    FILE *dest = fopen(destFile, "wb");
    if (dest == NULL) {
        printf("Ошибка создания целевого файла\n");
        fclose(source);
        return 1;
    }
    
    char ch;
    long bytesCopied = 0;
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
        bytesCopied++;
    }
    
    printf("Скопировано %ld байт\n", bytesCopied);
    
    fclose(source);
    fclose(dest);
    return 0;
}