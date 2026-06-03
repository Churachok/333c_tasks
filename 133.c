#include <stdio.h>

void xorFile(const char *inputFile, const char *outputFile, char key) {
    FILE *in = fopen(inputFile, "rb");
    FILE *out = fopen(outputFile, "wb");
    char ch;
    
    if (in == NULL || out == NULL) {
        printf("Ошибка открытия файлов\n");
        return;
    }
    
    while (fread(&ch, 1, 1, in) == 1) {
        ch ^= key;
        fwrite(&ch, 1, 1, out);
    }
    
    fclose(in);
    fclose(out);
}

int main() {
    xorFile("output.txt", "encrypted.txt", 0xAA);
    printf("Файл зашифрован в encrypted.txt\n");
    
    xorFile("encrypted.txt", "decrypted.txt", 0xAA);
    printf("Файл расшифрован в decrypted.txt\n");
    return 0;
}