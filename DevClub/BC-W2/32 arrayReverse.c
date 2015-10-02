// 18 Задача arrayReverse()
// Условие задачи 

// Написать функцию:
//  void arrayReverse(int array[], int size)

//  Использование дополнительного массива не разрешается.

//almost win

#include <stdio.h>

#define MAXITEM 10

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int buffer = array[i];

        array[i] = array[j];
        array[j] = buffer;
    }
}



int main() {
    int array[MAXITEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayReverse(array, MAXITEM);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

