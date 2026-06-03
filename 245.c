#include <stdio.h>
#include <stdlib.h>

void createLeak() {
    int *leak = (int*)malloc(100 * sizeof(int));
}

void noLeak() {
    int *ok = (int*)malloc(100 * sizeof(int));
    free(ok);
}

int main() {
    createLeak();
    noLeak();
    
    printf("Программа завершена\n");
    printf("Запустите: valgrind --leak-check=full ./program\n");
    return 0;
}