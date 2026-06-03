#include <stdio.h>

int main() {
    double a, b, result;
    char op;
    
    printf("Введите выражение (например: 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);
    
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) {
                result = a / b;
            } else {
                printf("Ошибка: деление на ноль\n");
                return 1;
            }
            break;
        default:
            printf("Неверная операция\n");
            return 1;
    }
    
    printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, result);
    return 0;
}