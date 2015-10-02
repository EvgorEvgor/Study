// Задача minN
// Условие задачи 

// Считать с клавиатуры целое положительное число - количество чисел в последовательности.
//  Затем считать с клавиатуры заданное количество чисел и вывести наименьшее из них.
//  Данная задача решается без массивов.
// Пример ввода 
// 5
// 1 2 3 4 5
// Пример вывода 
// 1

// code works

#include <stdio.h>

int main() {
    int counter;
    int current, min;
    
    scanf("%d %d", &counter, &min);
    
    for ( int i = 2; i <= counter; i++ ) {
        scanf("%d", &current);
        if ( current < min ) {
            min = current;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
