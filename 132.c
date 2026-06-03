#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("reversed.txt", "w");
    char words[100][50];
    int count = 0;
    
    if (input == NULL || output == NULL) {
        printf("Ошибка открытия файлов\n");
        return 1;
    }
    
    while (fscanf(input, "%49s", words[count]) == 1) {
        count++;
    }
    
    for (int i = count - 1; i >= 0; i--) {
        fprintf(output, "%s ", words[i]);
    }
    
    fclose(input);
    fclose(output);
    printf("Слова записаны в обратном порядке в reversed.txt\n");
    return 0;
}