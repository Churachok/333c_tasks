#include <stdio.h>
#include <math.h>

int main() {
    double inf = 1.0 / 0.0;
    double nan = 0.0 / 0.0;
    
    printf("Бесконечность: %f\n", inf);
    printf("NaN: %f\n", nan);
    printf("isinf(inf): %d\n", isinf(inf));
    printf("isnan(nan): %d\n", isnan(nan));
    return 0;
}