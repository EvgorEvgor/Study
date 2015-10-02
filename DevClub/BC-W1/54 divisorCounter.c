// Задача divisorCounter
// Условие задачи 

// Считать с клавиатуры целое положительное число, вывести на экран количество всех 
// делителей этого числа.

// Пример ввода 
// 12
// Пример вывода 
// 6

// code works

#include <stdio.h>

int main() {
    int counter;
    int divisorCounter = 1;
    
    scanf("%d", &counter);
    
    for ( int i = 2; i <= counter; i++ ) {
        if ( counter % i == 0 ) {
            divisorCounter += 1;
        }
    }
    printf("%d\n", divisorCounter);
    
    return 0;
}
