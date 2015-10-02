// Задача odd2
// Условие задачи 

// Считать с клавиатуры два целых числа, причём второе число не меньше первого.
//  Вывести в строку все нечётные числа в промежутке от первого до второго включительно.
//  В указанном промежутке гарантируется на вывод хотя бы одно число.
// Пример ввода 
// 7 15
// Пример вывода 
// 7 9 11 13 15

// code works

#include <stdio.h>

int main() {
    int min, max;
    int multiple;

    scanf("%d %d", &min, &max);

    multiple = min;
    if ( multiple % 2 == 0 ) {
        multiple += 1;
    }
    
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    
    for ( ; multiple < max; multiple += 2 ) {
        printf("%d ", multiple);
    }
    printf("%d\n", multiple);

    return 0;
}