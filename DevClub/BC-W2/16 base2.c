// 9 Задача base2
// Условие задачи 

// Считать с клавиатуры целое число в десятичной системе счисления и основание новой 
// системы счисления (целое число от 2 до 36).
//  Вывести в консоль число, записанное в новой системе счисления.
//  В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
//  Для решения можно пользоваться только циклами. Задача решается без массивов. 
// Использовать только тип int.
// Пример ввода 
// -255 16
// Пример вывода 
// -FF

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
    if ( multiply < 0 ) {
        printf("%c", '-');
        multiply *= -1;
    }
    
    for ( int i = placeOfBase(multiply, base) - 1; i >= 0; i-- ) {
        int powerOfBase, power;
        
        powerOfBase = powerOfX(base, i);
        power = multiply / powerOfBase;
        
        if ( power < 10 ) {
            printf("%d", power);
        } else {
            printf("%c", power+55);
        }
        multiply %= powerOfBase;
    }
    printf("\n");
    
    return 0;
}
