#include <stdio.h>
#include <stdlib.h>

void leakMemory() {
    int *ptr = (int*)malloc(100 * sizeof(int));
    printf("Утечка памяти: выделено 100 int\n");
}

int main() {
    for (int i = 0; i < 1000; i++) {
        leakMemory();  
    }
    
    printf("Программа завершена, но память не освобождена\n");
    printf("Используйте valgrind для обнаружения утечек\n");
    return 0;
}