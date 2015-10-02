// Задача pyramid2rev
// Условие задачи 

// Вывести числовую пирамидку на total строк. Порядок строк – обратный.
//  В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.
// Пример ввода 
// 3
// Пример вывода 
// 4 5 6
// 2 3
// 1

#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int row = total, counter = total * total / 2 + total / 2 + total % 2; row >= 1; row-- ) {
        counter -= row - 1;
        for ( int col = 1; col < row; col++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter -= row;
    }
    
    return 0;
}
