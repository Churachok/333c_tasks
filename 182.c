#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

int main() {
    Point a = {0, 0};
    Point b = {3, 4};
    
    printf("Расстояние между точками: %.2f\n", distance(a, b));
    return 0;
}