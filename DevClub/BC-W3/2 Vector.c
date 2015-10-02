// Задача Vector
// Условие задачи 

// С помощью известных вам инструментов реализовать тип Vector (вектор на координатной 
//  плоскости) с координатами x, y типа double. Также реализовать следующие функции:

//  void vectorIncrement(Vector *this, Vector other)
//  void vectorDecrement(Vector *this, Vector other)
//  int vectorEqual(Vector a, Vector b) - cравнение векторов по координатам
//  Vector vectorSum(Vector a, Vector b)
//  Vector vectorDiff(Vector a, Vector b)
//  double vectorLen(Vector this) – нахождение длины вектора. Воспользоваться функцией 
//  hypot() из библиотеки math.h
//  void vectorPrint(Vector this) - печать вектора в виде (x, y). Воспользоваться 
//  шаблоном %g

// code works

#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    return a.x == b.x && a.y == b.y;
}

Vector vectorSum(Vector a, Vector b) {
    Vector c = a;
    
    vectorIncrement(&c, b);
    return c;
}

Vector vectorDiff(Vector a, Vector b) {
    Vector c = a;
    
    vectorDecrement(&c, b);
    return c;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}

int main() {
    Vector a = {5, 7.8};
    Vector b = {13.9, 25.3};

    printf("Vectir A : ");
    vectorPrint(a);
    printf("\n");

    printf("Vectir B : ");
    vectorPrint(b);
    printf("\n");
    
    printf("Vector A vectorIncrement B: ");
    vectorIncrement(&a, b);
    vectorPrint(a);
    printf("\n");

    return 0;
}
