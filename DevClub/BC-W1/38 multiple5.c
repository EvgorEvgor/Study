// Задача multiple5 
// Условие задачи 

// Считать с клавиатуры целое положительное число.
//  Вывести в строку все числа, кратные 5, от нуля до указанного числа включительно.
// Пример ввода 
// 17
// Пример вывода 
// 0 5 10 15

// epic win

#include <stdio.h>

#define DIVISOR 5

int main() {
    int max;
    
    scanf("%d", &max);
    
    max -= max % DIVISOR;
    
    for ( int i = 0; i < max; i += DIVISOR ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
