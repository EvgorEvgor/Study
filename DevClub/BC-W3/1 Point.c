// Задача Point

// Условие задачи 

// С помощью известных вам инструментов реализовать тип Point (точка на координатной 
//  плоскости) с координатами x, y типа double.
//  Также реализовать следующие функции:

//  void pointPrint(Point a) - печать точки в виде (x, y). Воспользоваться шаблоном %g. 
//  Предусмотреть возможность печати вида (5, 7.8) not equal to (13.9, 25.3) 
//  int pointEqual(Point a, Point b) - сравнение двух точек по координатам (равны или 
//      не равны).
//  double pointDistance(Point a, Point b) - нахождение расстояния между двумя точками.
//   Воспользоваться функцией hypot() из библиотеки math.h

// almost win

#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}

int main() {
    Point a = {5, 7.8};
    Point b = {13.9, 25.3};

    pointPrint(a);
    if ( pointEqual(a, b) == 0) {
        printf(" is not equal to ");
    } else {
        printf(" is equal to ");
    }
    pointPrint(b);
    printf("\n");

    printf("Distance between ");
    pointPrint(a);
    printf(" and ");
    pointPrint(b);
    printf(" is %g\n", pointDistance(a,b));

    return 0;
}