// Задача powerOf2
// Условие задачи 

// Считать с клавиатуры целое неотрицательное число. Вывести через пробел степени 
// числа 2 от нулевой до заданной. Использовать цикл.
// Пример ввода 
// 3
// Пример вывода 
// 1 2 4 8

// code works

#include <stdio.h>

#define DIVIDEND 2

int main() {
    int power;
    int result = 1;
    
    scanf("%d", &power);
    
    for ( int i = 0; i < power; i++, result *= DIVIDEND ) {
        printf("%d ", result);
    }
    printf("%d\n", result);
    
    return 0;
}
