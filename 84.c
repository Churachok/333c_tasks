#include <stdio.h>

int main() {
    int day;
    printf("Введите день недели (1-7): ");
    scanf("%d", &day);
    
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Рабочий день\n");
            break;
        case 6:
        case 7:
            printf("Выходной\n");
            break;
        default:
            printf("Неверный день\n");
    }
    return 0;
}