// Задача prevEven

// Условие задачи 

// Считать целое число. Вывести на экран максимальное четное число, не большее введенного.
// Пример ввода 
// 17
// Пример вывода 
// 16

// code works

#include <stdio.h>

int main() {
    int dividend;
    
    scanf("%d", &dividend);
    
    if ( dividend % 2 != 0 ) {
        dividend -= 1;
    }
    printf("%d\n", dividend);
    
    return 0;
}

