#include <stdio.h>

int main() {
    register int counter = 0;  
    
    // register int *ptr; 
    // printf("%p", &counter); 
    
    for (register int i = 0; i < 1000000; i++) {
        counter++;
    }
    
    printf("counter = %d\n", counter);
    printf("register - подсказка компилятору для оптимизации\n");
    return 0;
}