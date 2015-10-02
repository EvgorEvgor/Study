// Задача arrayIncrement()
// Условие задачи 

// void arrayIncrement(int array[], int size, int increment)
//  Увеличить каждый элемент массива на значение increment.

//  ???epic win

#include <stdio.h>

#define SIZEARR 10

void arrayIncrement(int array[], int size, int increment) {
    for ( int i = 0; i < size; i++ ) {
        array[i] += increment;
    }
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayIncrement(arr, SIZEARR, 1);

    return 0;
}

