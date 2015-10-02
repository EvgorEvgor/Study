// Задача Complex

// Условие задачи 

// С помощью известных вам инструментов реализовать тип Complex для хранения комплексных чисел.

//  Теория:
//  Комплексное число задается формулой a + bi, где a и b - вещественные числа, i = sqrt(-1) 
//  (мнимая единица); a называют действительной частью (принято обозначать re), b называют 
//  мнимой частью (принято обозначать im).

//  Действия над комплексными числами:
//  * Сравнение: a + bi = c + di означает, что a = c и b = d (два комплексных числа равны 
//     между собой тогда и только тогда, когда равны их действительные и мнимые части).
//  * Сложение: (a + bi) + (c + di) = (a + c) + (b + d)i
//  * Вычитание: (a + bi) - (c + di) = (a - c) + (b - d)i
//  * Умножение: (a + bi)*(c + di) = ...

//  Модуль комплексного числа вычисляется как квадратный корень из суммы квадратов его 
//  действительной и мнимой частей.

//  void complexIncrement(Complex *this, Complex other)
//  void complexDecrement(Complex *this, Complex other)
//  void complexMultiply(Complex *this, Complex other)
//  Complex complexSum(Complex a, Complex b)
//  Complex complexDiff(Complex a, Complex b)
//  Complex complexProduct(Complex a, Complex b)
//  int complexEqual(Complex a, Complex b)
//  double complexAbs(Complex this) - нахождение модуля комплексного числа. 
//  Воспользоваться функцией hypot() из библиотеки math.h
//  void complexPrint(Complex this) - печать комплексного числа в виде a+bi. 
//  Воспользоваться шаблоном %g. Проследить за знаком мнимой части. Обеспечить 
//  возможность вывода вида 3+7i is not equal to 4+2i.
//- нахождение модуля комплексного числа. 
//  Воспользоваться функцией hypot() из библиотеки math.h    
// - печать комплексного числа в виде a+bi. 
//  Воспользоваться шаблоном %g. Проследить за знаком мнимой части. Обеспечить 
//  возможность вывода вида 3+7i is not equal to 4+2i.

// code works

#include <stdio.h>
#include <math.h>

typedef struct {
    double re, im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im; 
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im; 
}

void complexMultiply(Complex *this, Complex other) {
    double tempRe = this->re * other.re - this->im * other.im;
    double tempIm = this->re * other.im + this->im * other.re;
    
    this->re = tempRe;
    this->im = tempIm;    
}

Complex complexSum(Complex a, Complex b) {
    Complex result = a;
    
    complexIncrement(&result, b);
    return result;
}

Complex complexDiff(Complex a, Complex b) {
    Complex result = a;
    
    complexDecrement(&result, b);
    return result;
}

Complex complexProduct(Complex a, Complex b) {
    Complex result = a;

    complexMultiply(&result, b);

    return result;
}

int complexEqual(Complex a, Complex b) {
    return a.re == b.re && a.im == b.im;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);

}

void complexPrint(Complex this) {
    printf("%g%+gi", this.re, this.im);
}

int main() {
    Complex a = {5, 8};
    Complex b = {1, -3};

    printf("Complex A : ");
    complexPrint(a);
    printf("\n");

    printf("Complex B : ");
    complexPrint(b);
    printf("\n");
    
    printf("Complex A complexIncrement B: ");
    complexIncrement(&a, b);
    complexPrint(a);
    printf("\n");

    return 0;
}