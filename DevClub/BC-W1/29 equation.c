// Задача equation

// Условие задачи 

// Считать с клавиатуры целое число - дискриминант квадратного уравнения. Вывести на экран 
// число разных корней этого уравнения.
// Пример ввода 
// -20
// Пример вывода 
// 0

// code works

#include <stdio.h>

int main() {
    int discriminant;
    
    scanf("%d", &discriminant);
    
    if ( discriminant > 0 ) {
        printf("%d\n", 2);
    } else if ( discriminant < 0 ) {
        printf("%d\n", 0);
    } else {
        printf("%d\n", 1);
    }
    
    return 0;
}
