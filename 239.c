#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 10;
    int size = 0;
    int *buffer = (int*)malloc(capacity * sizeof(int));
    int input;
    
    printf("Вводите числа (0 для завершения):\n");
    
    while (1) {
        scanf("%d", &input);
        if (input == 0) break;
        
        if (size >= capacity) {
            capacity *= 2;
            buffer = (int*)realloc(buffer, capacity * sizeof(int));
            printf("Буфер расширен до %d элементов\n", capacity);
        }
        
        buffer[size++] = input;
    }
    
    printf("Сохранённые числа: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
    
    free(buffer);
    return 0;
}