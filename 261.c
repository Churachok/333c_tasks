#include <stdio.h>

int fileExists(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file) {
        fclose(file);
        return 1;
    }
    return 0;
}

int main() {
    const char *filename = "test.txt";
    
    if (fileExists(filename)) {
        printf("Файл '%s' существует\n", filename);
    } else {
        printf("Файл '%s' не существует\n", filename);
    }
    return 0;
}