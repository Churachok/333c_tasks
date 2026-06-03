#include <stdio.h>

int main() {
    int choice;
    double a, b;
    
    while (1) {
        printf("\n=== КАЛЬКУЛЯТОР ===\n");
        printf("1 - Сложение\n");
        printf("2 - Вычитание\n");
        printf("3 - Умножение\n");
        printf("4 - Деление\n");
        printf("5 - Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);
        
        if (choice == 5) {
            printf("До свидания!\n");
            break;
        }
        
        if (choice < 1 || choice > 5) {
            printf("Ошибка: неверный выбор!\n");
            continue;
        }
        
        printf("Введите два числа: ");
        scanf("%lf %lf", &a, &b);
        
        switch (choice) {
            case 1:
                printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
                break;
            case 2:
                printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
                break;
            case 3:
                printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
                } else {
                    printf("Ошибка: деление на ноль!\n");
                }
                break;
        }
    }
    return 0;
}