#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdRecursive(int a, int b) {
    if (b == 0) return a;
    return gcdRecursive(b, a % b);
}

int main() {
    int a = 48, b = 18;
    
    printf("НОД(%d, %d) = %d (цикл)\n", a, b, gcd(a, b));
    printf("НОД(%d, %d) = %d (рекурсия)\n", a, b, gcdRecursive(a, b));
    
    return 0;
}