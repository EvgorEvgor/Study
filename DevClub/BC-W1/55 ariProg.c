// Задача ariProg
// Условие задачи 

// Считать с клавиатуры три целых числа - первый член, шаг и количество членов 
// арифметической прогрессии. Вывести в строку через пробел члены заданной прогрессии.
//  Задаваемое количество больше нуля.
// Пример ввода 
// 12 2 4
// Пример вывода 
// 12 14 16 18

// code works

#include <stdio.h>

int main() {
    int first, step, counter;
    
    scanf("%d %d %d", &first, &step, &counter);
    
    for ( int i = 1; i < counter; i++, first += step ) {
        printf("%d ", first);
    }
    printf("%d\n", first);
    
    return 0;
}
