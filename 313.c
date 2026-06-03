#include <stdio.h>

unsigned int encodeDate(int day, int month, int year) {
    return (day & 0x1F) | ((month & 0x0F) << 5) | ((year & 0x1FFF) << 9);
}

void decodeDate(unsigned int code, int *day, int *month, int *year) {
    *day = code & 0x1F;
    *month = (code >> 5) & 0x0F;
    *year = (code >> 9) & 0x1FFF;
}

int main() {
    int day = 15, month = 6, year = 2024;
    
    unsigned int encoded = encodeDate(day, month, year);
    printf("Закодированная дата: %u (0x%08X)\n", encoded, encoded);
    
    int d, m, y;
    decodeDate(encoded, &d, &m, &y);
    printf("Расшифрованная дата: %02d.%02d.%04d\n", d, m, y);
    
    printf("\nФормат: 5 бит день, 4 бита месяц, 13 бит год\n");
    return 0;
}