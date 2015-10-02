// 10 Задача array
// Условие задачи 

// Считать в массив последовательность чисел длиной 10 из файла task.in.
//  Записать его через пробел в файл task.out.
// Пример ввода 
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода 
// 10 20 30 40 50 60 70 80 90 100

//code work

#include <stdio.h>

#define MAXITEM 10

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[MAXITEM];
    int counter = 0;
    
    for ( ; counter < MAXITEM && fscanf(in, "%d", array+counter) == 1; counter++ );
    fclose(in);
    
    counter -= 1;
    for ( int i = 0; i < counter; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    if ( counter > -1 ) {
        fprintf(out, "%d\n", array[counter]);
    }
    fclose(out);
    
    return 0;
}
