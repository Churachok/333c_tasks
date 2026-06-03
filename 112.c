#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;
    printf("Введите число: ");
    scanf("%d", &num);
    
    original = num;
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if (original == reversed) {
        printf("%d - палиндром\n", original);
    } else {
        printf("%d - не палиндром\n", original);
    }
    return 0;
}