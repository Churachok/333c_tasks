#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Использование: %s <число1> <операция> <число2>\n", argv[0]);
        printf("Операции: +, -, *, /\n");
        return 1;
    }
    
    double a = atof(argv[1]);
    char op = argv[2][0];
    double b = atof(argv[3]);
    double result;
    
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
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
    
    printf("%.2f %c %.2f = %.2f\n", a, op, b, result);
    return 0;
}