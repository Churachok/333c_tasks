#include <stdio.h>
#include <math.h>

double square(double x) { return x * x; }
double cube(double x) { return x * x * x; }
double sinus(double x) { return sin(x); }

void printTable(double (*func)(double), double start, double end, double step) {
    printf("\nТаблица значений:\n");
    for (double x = start; x <= end; x += step) {
        printf("f(%.2f) = %.4f\n", x, func(x));
    }
}

int main() {
    printTable(square, -3, 3, 1);
    printTable(cube, -2, 2, 0.5);
    printTable(sinus, 0, M_PI, M_PI/4);
    return 0;
}