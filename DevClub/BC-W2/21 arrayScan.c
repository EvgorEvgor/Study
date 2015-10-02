// Задача arrayScan()
// Условие задачи 

// int arrayScan(FILE *in, int array[], int limit)
//  Считать из файла in не более limit элементов в массив array.
//  Вернуть количество считанных элементов.

// code works

#include <stdio.h>

#define SIZEARR 10

int arrayScan(FILE *in, int array[], int limit) {
    int quantity = 0;
    
    for ( ; quantity < limit && fscanf(in, "%d", &array[quantity]) == 1; quantity++ );
    return quantity;
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    FILE *read = fopen("arrayScan_task.in", "r");

    printf("\n%d\n", arrayScan(read, arr, SIZEARR));

    fclose(read);

    return 0;
}

