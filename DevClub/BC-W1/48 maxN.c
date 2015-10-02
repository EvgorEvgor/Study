// Задача maxN
// Условие задачи 

// Считать с клавиатуры целое положительное число - количество чисел в последовательности.
//  Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.
// Пример ввода 
// 5
// 1 2 3 4 5
// Пример вывода 
// 5

// code works

#include <stdio.h>

i#include <stdio.h>

int main() {
    int counter;
    int current, max;
    
    scanf("%d %d", &counter, &max);
    
    for ( int i = 2; i <= counter; i++ ) {
        scanf("%d", &current);
        if ( current > max ) {
            max = current;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
