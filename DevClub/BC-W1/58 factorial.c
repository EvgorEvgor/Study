// Задача factorial
// Условие задачи 

// Вычислить и вывести факториал считанного с клавиатуры целого числа.
//  В случае неопределенности ответа вывести -1.
//  Для решения пользоваться циклами.
// Пример ввода 
// 5
// Пример вывода 
// 120

// code works

#include <stdio.h>

int main() {
    int factorial;
    int result;
    
    scanf("%d", &factorial);
    
    if ( factorial == 0 ) {
        printf("%d\n", 1);
    } else if ( factorial < 0 ) {
        printf("%d\n", -1);
    } else {
        for ( result = 1; factorial > 1; factorial-- ) {
            result *= factorial;
        }
        printf("%d\n", result);
    }
    
    return 0;
}
