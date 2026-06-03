#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("data.bin", "wb");
    int numbers[] = {100, 200, 300, 400, 500};
    fwrite(numbers, sizeof(int), 5, file);
    fclose(file);
    file = fopen("data.bin", "rb");
    int readNumbers[5];
    fread(readNumbers, sizeof(int), 5, file);
    
    printf("Прочитанные числа: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", readNumbers[i]);
    }
    printf("\n");
    
    fclose(file);
    return 0;
}