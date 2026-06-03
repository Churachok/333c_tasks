#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(10 * sizeof(int));
    // Забыли free(arr); - утечка памяти!
    
    arr[0] = 42;
    printf("%d\n", arr[0]);
    return 0;
}

// Команда: valgrind --leak-check=full ./program