#include <stdio.h>

int x = 100;  

int main() {
    int x = 50;  
    
    printf("Локальная x = %d\n", x);
    printf("Глобальная x = %d\n", ::x); 
    

    extern int x_global;
    return 0;
}