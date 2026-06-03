#include <stdio.h>

int main() {
    FILE *file = fopen("binary.dat", "wb+");
    int numbers[] = {10, 20, 30, 40, 50};
    int readNumbers[5];
    

    fwrite(numbers, sizeof(int), 5, file);
    rewind(file);
    fread(readNumbers, sizeof(int), 5, file);
    
    printf("Прочитанные числа: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", readNumbers[i]);
    }
    printf("\n");
    
    fclose(file);
    return 0;
}