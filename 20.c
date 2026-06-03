#include <stdio.h>

enum Color { RED, GREEN, BLUE };

int main() {
    enum Color myColor = GREEN;
    printf("Значение GREEN: %d\n", myColor); 
    return 0;
}