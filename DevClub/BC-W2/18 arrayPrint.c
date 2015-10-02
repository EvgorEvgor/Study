// Задача arrayPrint()
// Условие задачи 

// void arrayPrint(FILE *out, int array[], int size)
//  Функция должна вывести элементы массива через пробел, завершив вывод символом 
//  перевода строки.

// epic win

#include <stdio.h>

#define SIZEARR 10

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    FILE *write = fopen("task.out", "w");

    arrayPrint(write, arr, 10);

    fclose(write);

    return 0;
}
