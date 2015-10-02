// 19 Задача arrayShiftRight()
// Условие задачи 

// Написать функцию:
//  void arrayShiftRight(int array[], int size)
//  Реализовать циклический сдвиг массива на 1 элемент вправо.
//  Использование дополнительного массива не разрешается.

// epic win

#include <stdio.h>

#define MAXITEM 10

void arrayShiftRight(int array[], int size) {
    int last = size - 1;
    int buffer = array[last];
    
    for ( int i = last; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = buffer;
}

int main() {
    int array[MAXITEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayShiftRight(array, MAXITEM);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
