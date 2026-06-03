#include <stdio.h>

int main() {
    float sum = 0.0f;
    for (int i = 0; i < 1000; i++) {
        sum += 0.001f;
    }
    printf("Ожидалось 1.0, получено: %.10f\n", sum);
    return 0;
}