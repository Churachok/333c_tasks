#include <stdio.h>

struct Compact {
    char c;  
    int i;    
    short s; 
};  

struct Optimized {
    int i;    
    short s;  
    char c;  
};  

int main() {
    printf("Размер struct Compact: %zu байт\n", sizeof(struct Compact));
    printf("Размер struct Optimized: %zu байт\n", sizeof(struct Optimized));
    printf("Выравнивание влияет на размер!\n");
    return 0;
}