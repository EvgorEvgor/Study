// Задача places

// Условие задачи 

// Считать с клавиатуры целое число.
//  Вывести на экран количество знакомест, нужных для вывода этого числа.
// Пример ввода 
// 123
// Пример вывода 
// 3

//code works

#include <stdio.h>

int main() {
    int a;
    int counter = 1;
    
    scanf("%d", &a);
    
    if ( a < 0 ) {
        counter += 1;
    }
    
    for ( int i = a / 10; i != 0; i /= 10 ) {
        counter += 1;
    }
    
    printf("%d\n", counter);
    
    return 0;
}
