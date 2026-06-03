#include <stdio.h>
#include <math.h>

int main() {
    double a = 0.1 + 0.2;
    double b = 0.3;
    double epsilon = 1e-9;
    
    if (fabs(a - b) < epsilon) {
        printf("Числа равны с погрешностью\n");
    }
    return 0;
}