#include <stdio.h>

#define PRINT_VAR(x) printf(#x " = %d\n", x)
#define STRINGIFY(x) #x

int main() {
    int age = 25;
    int salary = 50000;
    
    PRINT_VAR(age);
    PRINT_VAR(salary);
    
    printf("STRINGIFY(Hello World) = %s\n", STRINGIFY(Hello World));
    return 0;
}