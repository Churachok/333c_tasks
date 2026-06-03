#include <stdio.h>

int main() {
    int a = 42;
    int *p = &a;
    
    printf("До: a = %d, *p = %d\n", a, *p);
    
    *p = 100;
    
    printf("После: a = %d, *p = %d\n", a, *p);
    return 0;
}