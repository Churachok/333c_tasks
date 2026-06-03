#include <stdio.h>

#define PRINT_SIZE(type) printf("Размер " #type " = %zu байт\n", sizeof(type))

int main() {
    PRINT_SIZE(char);
    PRINT_SIZE(short);
    PRINT_SIZE(int);
    PRINT_SIZE(long);
    PRINT_SIZE(float);
    PRINT_SIZE(double);
    PRINT_SIZE(long long);
    return 0;
}