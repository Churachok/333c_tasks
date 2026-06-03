#include <stdio.h>


static int globalStatic = 0;

void demonstrate() {
    static int funcStatic = 10;   
    int autoVar = 10;             
    
    funcStatic++;
    autoVar++;
    
    printf("funcStatic: %2d, autoVar: %2d, globalStatic: %2d\n", 
           funcStatic, autoVar, globalStatic);
    globalStatic++;
}

int main() {
    printf("Статические vs автоматические переменные:\n");
    for (int i = 0; i < 5; i++) {
        demonstrate();
    }
    return 0;
}