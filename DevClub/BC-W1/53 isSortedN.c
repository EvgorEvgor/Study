// Задача isSortedN
// Условие задачи 

// Считать с клавиатуры положительную длину числовой последовательности и саму 
// последовательность. Проверить, упорядочена ли последовательность по неубыванию. 
// Если упорядочена вывести на экран «yes», в противном случае вывести «no».

// Пример ввода 
// 5
// -20 -15 0 12 15
// Пример вывода 
// yes

// code works

#include <stdio.h>

int main() {
    int countN;
    int currentN, lastN;
    
    scanf("%d %d", &countN, &lastN);
    
    for ( int i = 2; i <= countN; i++, lastN = currentN ) {
        scanf("%d", &currentN);
        if ( currentN < lastN ) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    
    return 0;
}