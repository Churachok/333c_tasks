#include <stdio.h>

int main() {
    float f = 0.1f;
    double d = 0.1;
    
    printf("float: %.15f\n", f);
    printf("double: %.15f\n", d);
    
    if (f == d) {
        printf("Равны\n");
    } else {
        printf("Не равны (double точнее)\n");
    }
    return 0;
}