// Задача even

// Условие задачи 

// Считать с клавиатуры целое положительное число.
//  Вывести в строку все чётные числа от нуля до указанного числа включительно.
// Пример ввода 
// 7
// Пример вывода 
// 0 2 4 6

// code works

#include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    
    max -= max % 2;
    
    for ( int multiple = 0; multiple < max; multiple += 2 ) {
        printf("%d ", multiple);
    }
    printf("%d\n", max);
    
    return 0;
}