// 20 Задача arrayShiftLeft()
// Условие задачи 

// Написать функцию:
//  arrayShiftLeft(int array[], int size)
//  Реализовать циклический сдвиг массива на 1 элемент влево.
//  Использование дополнительного массива не разрешается.

//epic win

#include <stdio.h>

#define MAXITEM 10

void arrayShiftLeft(int array[], int size) {
    int buffer = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = buffer;
}



int main() {
    int array[MAXITEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayShiftLeft(array, MAXITEM);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
