// Задача isPowerOf2
// Условие задачи 

// Считать с клавиатуры целое положительное число. Если число является целой степенью двойки, вывести "yes", иначе вывести "no".
// Пример ввода 
// 8
// Пример вывода 
// yes

//code works

#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( !(a & (a - 1)) ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}