// 24 Задача sliceShiftRight()
// Условие задачи 

// Написать функцию:
//  void sliceShiftRight(int array[], int start, int end)
//  Осуществить циклический сдвиг части массива на один элемент вправо от start до end включительно.

// epic win

#include <stdio.h>

#define MAXITEM 10

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int buffer = array[end];
        
        for ( int i = end; i > start; i-- ) {
            array[i] = array[i-1];
        }
        array[start] = buffer;
    }
}

int main() {
    int array[MAXITEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    sliceShiftRight(array, 3, 7);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
