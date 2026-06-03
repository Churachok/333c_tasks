#include <stdio.h>

int main() {
    for (int i = 32; i < 128; i++) {
        printf("%3d: %c   ", i, i);
        if ((i - 31) % 5 == 0) printf("\n");
    }
    return 0;
}