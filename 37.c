#include <stdio.h>
#include <float.h>

int main() {
    float big = FLT_MAX;
    printf("Максимум: %e\n", big);
    printf("Переполнение: %e\n", big * 2.0f); 
    return 0;
}