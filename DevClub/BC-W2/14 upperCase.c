// Задача upperCase

// Условие задачи
// В файле task.in дана последовательность символов.
//  Перевести все буквы в верхний регистр и вывести результирующую последовательность 
//  в файл task.out
// Пример ввода 
// abcd
// Пример вывода 
// ABCD

// code works

#include <stdio.h>

int main() {
    FILE *read = fopen("task.in", "r");
    FILE *write = fopen("task.out", "w");
    
    for ( char a; fscanf(read, "%c", &a) == 1; ) {
        if ( a >= 'a' && a <= 'z' ) {
            fprintf(write, "%c", a-32);
        } else {
            fprintf(write, "%c", a);
        }
    }
    fprintf(write, "\n");
    fclose(read);
    fclose(write);
    
    return 0;
}
