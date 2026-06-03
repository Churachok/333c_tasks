#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>

void testAlloca(int n) {
    int *arr = (int*)alloca(n * sizeof(int));  
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("alloca: массив на %d элементов в стеке\n", n);
}

void testMalloc(int n) {
    int *arr = (int*)malloc(n * sizeof(int));  
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("malloc: массив на %d элементов в куче\n", n);
    free(arr);  
}

int main() {
    testAlloca(100);
    testMalloc(100);
    
    printf("\nРазличия:\n");
    printf("alloca - стек, быстро, автоматическое освобождение, опасно для больших размеров\n");
    printf("malloc - куча, медленнее, ручное управление, безопасно для больших размеров\n");
    return 0;
}