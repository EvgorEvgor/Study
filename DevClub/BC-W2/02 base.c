// 1 Задача base
// Условие задачи 

// Считать с клавиатуры целое неотрицательное число в десятичной системе счисления 
// и основание новой системы счисления (целое число от 2 до 10).
//  Вывести в консоль число, записанное в новой системе счисления.
//  Задача решается без массивов.
// Пример ввода 
// 8 3
// Пример вывода 
// 22
//code works

#include <stdio.h>

int placeOfBase(int number, int base) {
    int counter = 1;
    
    for ( int i = number / base; i > 0; i /= base ) {
        counter += 1;
    }
    return counter;
}

int powerOfX(int base, int power) {
    int result = 1;
    
    for ( int i = 0; i < power; i++ ) {
        result *= base;
    }
    return result;
}

int main() {
    int number;
    int base;
    int multiply;
    
    scanf("%d %d", &number, &base);
    
    multiply = number;
    for ( int i = placeOfBase(number, base) - 1; i >= 0; i-- ) {
        int powerOfBase;
        
        powerOfBase = powerOfX(base, i);
        printf("%d", multiply/powerOfBase);
        multiply %= powerOfBase;
    }
    printf("\n");
    
    return 0;
}
