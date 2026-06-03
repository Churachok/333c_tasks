#include <stdio.h>

union FloatBytes {
    float f;
    unsigned char bytes[4];
};

int main() {
    union FloatBytes fb;
    fb.f = 3.14f;
    
    printf("Число %f в байтах: ", fb.f);
    for (int i = 0; i < 4; i++) {
        printf("%02X ", fb.bytes[i]);
    }
    printf("\n");
    return 0;
}