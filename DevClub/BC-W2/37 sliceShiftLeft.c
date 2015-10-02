// 23 Задача sliceShiftLeft()
// Условие задачи 

// Написать функцию:
//  void sliceShiftLeft(int array[], int start, int end)
//  Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.

// epic win

#include <stdio.h>

#define MAXITEM 10

void sliceShiftLeft(int array[], int start, int end) {
    if ( start < end ) {
        int buffer = array[start];
        
        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = buffer;
    }
}



int main() {
    int array[MAXITEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    sliceShiftLeft(array, 1, 1);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
