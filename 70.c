#include <stdio.h>

int main() {
    int width = 10, height = 5;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}