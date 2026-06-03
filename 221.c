#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    printf("Значение: %d\n", *ptr);
    
    free(ptr);
    
    // Повторный free - НЕОПРЕДЕЛЁННОЕ ПОВЕДЕНИЕ!
    // free(ptr);  // Раскомментировать - вызовет ошибку double free
    
    ptr = NULL;
    free(ptr);  
    
    printf("Память освобождена\n");
    return 0;
}