#include <stdio.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divd(double a, double b) { return a / b; }

int main() {
    double (*operations[])(double, double) = {add, sub, mul, divd};
    char symbols[] = {'+', '-', '*', '/'};
    double a, b;
    int choice;
    
    printf("Введите два числа: ");
    scanf("%lf %lf", &a, &b);
    
    printf("Выберите операцию:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d - %c\n", i + 1, symbols[i]);
    }
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= 4) {
        printf("%.2f %c %.2f = %.2f\n", a, symbols[choice-1], b, 
               operations[choice-1](a, b));
    }
    
    return 0;
}