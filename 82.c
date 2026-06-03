#include <stdio.h>

int main() {
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d - високосный год\n", year);
    } else {
        printf("%d - не високосный год\n", year);
    }
    return 0;
}