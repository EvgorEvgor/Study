// Задача abcz2

// Условие задачи 

// Считать с клавиатуры целое число.
//  - Если число четное, вывести alpha
//  - Если число кратно трем, вывести bravo
//  - Если число кратно пяти, вывести charlie
//  - Если число не кратно ни одному из них, вывести zulu
// Пример ввода 
// 8
// Пример вывода 
// alpha

// code works

#include <stdio.h>

int main() {
    int even;
    
    scanf("%d", &even);
    
    if ( even % 2 == 0 ) {
        printf("alpha\n");
    }
    if ( even % 3 == 0 ) {
        printf("bravo\n");
    }
    if ( even % 5 == 0 ) {
        printf("charlie\n");
    } else if ( even % 2 != 0 && even % 3 != 0 ) {
        printf("zulu\n");
    }
    
    return 0;
}
