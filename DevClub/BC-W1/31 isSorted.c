// Задача isSorted

// Условие задачи 

// Считать с клавиатуры числовую последовательность - 5 целых чисел. Проверить, упорядочена
//  ли последовательность по неубыванию. Если упорядочена вывести на экран «yes», в 
//  протиивном случае вывести «no». Задача решается без использования циклов.
// Пример ввода 
// -20 -15 0 12 15
// Пример вывода 
// yes

// code works

#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    if ( num5 < num4 || num4 < num3 || num3 < num2 || num2 < num1 ) {
        printf("no\n");
        return 0;
    }
    printf("yes\n");
    
    return 0;
}
