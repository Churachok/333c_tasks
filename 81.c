#include <stdio.h>

int main() {
    int month;
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    
    switch (month) {
        case 1: printf("Январь\n"); break;
        case 2: printf("Февраль\n"); break;
        case 3: printf("Март\n"); break;
        case 4: printf("Апрель\n"); break;
        case 5: printf("Май\n"); break;
        case 6: printf("Июнь\n"); break;
        case 7: printf("Июль\n"); break;
        case 8: printf("Август\n"); break;
        case 9: printf("Сентябрь\n"); break;
        case 10: printf("Октябрь\n"); break;
        case 11: printf("Ноябрь\n"); break;
        case 12: printf("Декабрь\n"); break;
        default: printf("Неверный номер\n");
    }
    return 0;
}