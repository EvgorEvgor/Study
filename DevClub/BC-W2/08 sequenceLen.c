// 5 Задача sequenceLen
// Условие задачи 

// Считать из файла task.in последовательность чисел размером не более 100 элементов.
//  Посчитать длину последовательности и вывести ее в task.out.
// Пример ввода 
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода 
// 10

//code works

#include <stdio.h>

#define LIMIT 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int counter = 0;
    
    for ( int a; fscanf(in, "%d", &a) == 1 && counter < LIMIT; counter++ );
    fclose(in);
    
    fprintf(out, "%d\n", counter);
    fclose(out);
    
    return 0;
}
