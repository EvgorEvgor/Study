// 4 Задача powerOf2()
// Условие задачи 

// int powerOf2(int exponent)
//  Возвести 2 в данную целую неотрицательную степень.
//  Воспользоваться побитовыми операциями.
//  

//epic win

#include <stdio.h>

int powerOf2(int exponent) {
    return 1 << exponent;
}

int main() {

    for ( int i = 0; i <= 10; i++ ) {
        printf("%d\n", powerOf2(i));
    }
    return 0;
}