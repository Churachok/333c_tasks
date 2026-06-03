#include <stdio.h>

unsigned int encodeRGB(unsigned char r, unsigned char g, unsigned char b) {
    return (r << 16) | (g << 8) | b;
}

void decodeRGB(unsigned int color, unsigned char *r, unsigned char *g, unsigned char *b) {
    *r = (color >> 16) & 0xFF;
    *g = (color >> 8) & 0xFF;
    *b = color & 0xFF;
}

int main() {
    unsigned char r = 255, g = 128, b = 64;
    
    unsigned int color = encodeRGB(r, g, b);
    printf("Цвет в 32-битном числе: 0x%06X (%u)\n", color, color);
    
    unsigned char r2, g2, b2;
    decodeRGB(color, &r2, &g2, &b2);
    printf("Расшифрованные компоненты: R=%d, G=%d, B=%d\n", r2, g2, b2);
    
    return 0;
}