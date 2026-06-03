#include <stdio.h>

int main() {
    int x = 10;
    printf("Внешний блок: x = %d\n", x);
    
    {
        int x = 20;
        printf("Внутренний блок: x = %d\n", x);
        
        {
            int x = 30;
            printf("Самый внутренний блок: x = %d\n", x);
        }
        
        printf("Внутренний блок (после вложенного): x = %d\n", x);
    }
    
    printf("Внешний блок (после внутреннего): x = %d\n", x);
    return 0;
}