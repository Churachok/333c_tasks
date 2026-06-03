#include <stdio.h>

int main() {
    int count = 0;
    
    while (1) { 
        printf("Итерация %d\n", count);
        count++;
        
        if (count >= 5) {
            break; 
        }
    }
    return 0;
}