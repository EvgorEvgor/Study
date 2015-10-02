// Задача square2rev
// Условие задачи 

// Вывести числовой квадрат заданного размера.
//  Выведенные числа начинаются с единицы и постоянно увеличиваются.
//  В каждой строке числа разделены пробелами.
//  Порядок строк обратный.
//  Размер считать с клавиатуры.
// Пример ввода 
// 2
// Пример вывода 
// 3 4
// 1 2

// code works

#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = 1, col = 1, counter = 0; row <= size; row++ ) {
        for ( col = 1; col < size; col++ ) {
            counter = size * size - size * row + col;
            printf("%d ", counter);
        }
        counter = size * size - size * row + col;
        printf("%d\n", counter);
    }
    
    return 0;
}
