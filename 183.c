#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void printPoint(Point p) {
    printf("(%d, %d)\n", p.x, p.y);
}

int main() {
    Point p1 = {5, 10};
    Point p2 = {-3, 7};
    
    printf("Координаты: ");
    printPoint(p1);
    printPoint(p2);
    return 0;
}