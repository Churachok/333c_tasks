#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int **ptrs = (int**)malloc(n * sizeof(int*));
    
    for (int i = 0; i < n; i++) {
        ptrs[i] = (int*)malloc(sizeof(int));
        *ptrs[i] = (i + 1) * 10;
    }
    
    printf("Значения через указатели:\n");
    for (int i = 0; i < n; i++) {
        printf("ptrs[%d] = %d\n", i, *ptrs[i]);
    }
    
    for (int i = 0; i < n; i++) {
        free(ptrs[i]);
    }
    free(ptrs);
    
    return 0;
}