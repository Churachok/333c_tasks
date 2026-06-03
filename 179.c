#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month current = MAR;
    
    printf("Номер месяца: %d\n", current);
    
    if (current == MAR) {
        printf("Это март!\n");
    }
    return 0;
}