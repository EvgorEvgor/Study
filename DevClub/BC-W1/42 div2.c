// Задача div2
// Условие задачи 

// Считать min, max. Вывести в столбик чётные числа от min до max включительно.
// Пример ввода 
// 0 8
// Пример вывода 
// 0
// 2
// 4
// 6
// 8

// code works

#include <stdio.h>

int main() {
    int min, max;
    int multiple;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        multiple = min;
    } else {
        multiple = min + 1;
    }
    for ( ; multiple <= max; multiple += 2 ) {
        printf("%d\n", multiple);
    }
    
    return 0;
}
