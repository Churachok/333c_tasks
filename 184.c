#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point topLeft;
    Point bottomRight;
} Rectangle;

int area(Rectangle r) {
    int width = r.bottomRight.x - r.topLeft.x;
    int height = r.bottomRight.y - r.topLeft.y;
    return width * height;
}

int main() {
    Rectangle rect = {{0, 0}, {5, 4}};
    printf("Площадь прямоугольника: %d\n", area(rect));
    return 0;
}