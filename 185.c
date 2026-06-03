#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point topLeft;
    Point bottomRight;
} Rectangle;

bool intersect(Rectangle r1, Rectangle r2) {
    return !(r1.bottomRight.x < r2.topLeft.x ||
             r1.topLeft.x > r2.bottomRight.x ||
             r1.bottomRight.y < r2.topLeft.y ||
             r1.topLeft.y > r2.bottomRight.y);
}

int main() {
    Rectangle r1 = {{0, 5}, {5, 0}};
    Rectangle r2 = {{3, 4}, {7, 1}};
    
    if (intersect(r1, r2)) {
        printf("Прямоугольники пересекаются\n");
    } else {
        printf("Прямоугольники не пересекаются\n");
    }
    return 0;
}