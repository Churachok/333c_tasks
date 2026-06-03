#include <stdio.h>

int x = 100; 

int main() {
    int x = 50; 
    printf("Глобальная (вне доступа): %d\n", x); 
    
    {
        int x = 10; 
        printf("Блочная x = %d\n", x);
    }
    
    printf("Локальная x = %d\n", x);
    return 0;
}
