#include <stdio.h>

int main() {
    int power = 1;
    int exponent = 1;
    
    while (power <= 1000) {
        printf("2^%d = %d\n", exponent, power);
        power *= 2;
        exponent++;
    }
    return 0;
}