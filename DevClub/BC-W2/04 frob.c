// 3 Задача frob
// Условие задачи 

// Ввести положительную длину последовательности чисел, затем саму последовательность.
//  Вывести искаженную последовательность, полученную применением к исходным членам 
// побитовой операции xor с числом 42.
//  Каждый член вывести на отдельной строке.
// Пример ввода 
// 2
// 0 42
// Пример вывода 
// 42
// 0

// code works

#include <stdio.h>

#define DIVISOR 42

int main() {
    int counter;
    int current;
    
    scanf("%d %d", &counter, &current);
    printf("%d\n", current^DIVISOR);
    
    for ( int i = 2; i <= counter; i++ ) {
        scanf("%d", &current);
        printf("%d\n", current^DIVISOR);
    }
    
    return 0;
}
