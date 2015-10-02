// Задача average()
// Условие задачи 

// unsigned int average(unsigned int a, unsigned int b)
//  Вернуть среднее арифметическое двух положительных целых чисел. Использовать только 
// тип unsigned int.
//  Если среднее значение не является целым, то округлить его к ближайшему целому 
// в меньшую сторону.

// code works

#include <stdio.h>

#define MAX1 2000003
#define MAX2 2500002

unsigned int average(unsigned int a, unsigned int b) {
    return a / 2 + b / 2 + (a % 2 + b % 2) / 2;
}
    
int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    printf("%d\n", average(a, b));
    
 //   printf("%d\n", average(MAX1, MAX2));
    
    return 0;
}