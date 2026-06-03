#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000000

int main() {
    clock_t start, end;
    double malloc_time, calloc_time;
    

    start = clock();
    int *malloc_arr = (int*)malloc(SIZE * sizeof(int));
    end = clock();
    malloc_time = (double)(end - start) / CLOCKS_PER_SEC;
    
 
    start = clock();
    int *calloc_arr = (int*)calloc(SIZE, sizeof(int));
    end = clock();
    calloc_time = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("Размер массива: %d элементов\n", SIZE);
    printf("malloc время: %.4f секунд\n", malloc_time);
    printf("calloc время: %.4f секунд\n", calloc_time);
    
    if (malloc_time < calloc_time) {
        printf("malloc быстрее (не инициализирует память)\n");
    } else {
        printf("calloc медленнее (инициализирует нулями)\n");
    }
    
    free(malloc_arr);
    free(calloc_arr);
    return 0;
}