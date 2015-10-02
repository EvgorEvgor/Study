// Задача div5

// Условие задачи 

// Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.
// Пример ввода 
// 0 15
// Пример вывода 
// 0
// 5
// 10
// 15

// code works

#include <stdio.h>

#define DIVIZOR 5

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
