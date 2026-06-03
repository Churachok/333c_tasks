#include <stdio.h>

#define DEBUG_PRINT(fmt, ...) printf("[DEBUG] " fmt "\n", ##__VA_ARGS__)

int main() {
    int x = 42;
    double y = 3.14;
    
    DEBUG_PRINT("Программа запущена");
    DEBUG_PRINT("x = %d", x);
    DEBUG_PRINT("x = %d, y = %.2f", x, y);
    return 0;
}