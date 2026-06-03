#include <stdio.h>
#include <stdlib.h>


int globalVar;  
static int staticVar;  

void function() {
    static int localStatic = 0;  
    int autoVar = 0;  
    
    localStatic++;
    autoVar++;
    
    printf("localStatic: %d, autoVar: %d\n", localStatic, autoVar);
}

int main() {
    int *dynamic = (int*)malloc(sizeof(int));
    *dynamic = 42;
    
    function();
    function();
    function();
    
    free(dynamic);
    
    printf("\nСтатическая: время жизни = вся программа\n");
    printf("Автоматическая: время жизни = блок кода\n");
    printf("Динамическая: управляется программистом\n");
    return 0;
}