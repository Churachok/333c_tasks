#include <stdio.h>

#define DEBUG 1

#if DEBUG
    #define DEBUG_PRINT(msg) printf("[DEBUG] %s\n", msg)
    #define DEBUG_PRINT_VAR(var) printf("[DEBUG] %s = %d\n", #var, var)
#else
    #define DEBUG_PRINT(msg)
    #define DEBUG_PRINT_VAR(var)
#endif

int main() {
    int x = 42;
    
    DEBUG_PRINT("Программа запущена");
    DEBUG_PRINT_VAR(x);
    
    printf("Основная логика программы\n");
    return 0;
}