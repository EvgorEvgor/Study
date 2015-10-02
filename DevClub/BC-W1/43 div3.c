// Задача div3

// Условие задачи 

// Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.
// Пример ввода 
// 0 9
// Пример вывода 
// 0
// 3
// 6
// 9

// code works

#include <stdio.h>

#define DIVIZOR 3

int main() {
    int min, max;
    int multiple;

    scanf("%d %d", &min, &max);
    
    multiple = min - min % DIVIZOR;
    if ( multiple < min ) {
        multiple += DIVIZOR;
    }
    for ( ; multiple <= max; multiple += DIVIZOR ) {
        printf("%d\n", multiple);
    }
    
    return 0;
}
