#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    
    int *malloc_arr = (int*)malloc(n * sizeof(int));
    int *calloc_arr = (int*)calloc(n, sizeof(int));
    
    printf("malloc - значения не инициализированы:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", malloc_arr[i]);
    }
    
    printf("\n\ncalloc - все значения инициализированы нулями:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", calloc_arr[i]);
    }
    
    printf("\n\nРазличия:\n");
    printf("malloc: быстрее, но мусорные значения\n");
    printf("calloc: медленнее, но гарантирует нули\n");
    
    free(malloc_arr);
    free(calloc_arr);
    return 0;
}