// Задача nextEven

// Условие задачи 

// Считать целое число. Вывести на экран минимальное четное число, не меньшее введенного.
// Пример ввода 
// 17
// Пример вывода 
// 18

// code works

#include <stdio.h>

int main() {
    int dividend;
    
    scanf("%d", &dividend);
    
    if ( dividend % 2 != 0 ) {
        dividend += 1;
    }
    printf("%d\n", dividend);
    
    return 0;
}
