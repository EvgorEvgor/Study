// Задача lowerCase

// Условие задачи 

// В файле task.in дана последовательность символов.
//  Перевести все буквы в нижний регистр и вывести результирующую последовательность 
// в файл task.out
// Пример ввода 
// ABCD
// Пример вывода 
// abcd

// code works

#include <stdio.h>

int main() {
    FILE *read = fopen("task.in", "r");
    FILE *write = fopen("task.out", "w");
    
    for ( char a; fscanf(read, "%c", &a) == 1; ) {
        if ( a >= 'A' && a <= 'Z' ) {
            fprintf(write, "%c", a+32);
        } else {
            fprintf(write, "%c", a);
        }
    }
    fprintf(write, "\n");
    fclose(read);
    fclose(write);
    
    return 0;
}

