// Задача natural 
// Условие задачи 

// Считать с клавиатуры целое положительное число.
//  Вывести в строку через пробел по порядку все натуральные числа, не превышающие заданное.
// Пример ввода 
// 5
// Пример вывода 
// 1 2 3 4 5

// epic win

include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    
    for ( int i = 1; i < max; i++ ) {
        printf("%d_", i);
    }
    printf("%d\n", max);
    
    return 0;
}