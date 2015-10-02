// Задача arrayAbs()
// Условие задачи 

// void arrayAbs(int array[], int size)
//  Заменить каждый элемент массива его абсолютным значением.

// epic win

#include <stdio.h>

#define SIZEARR 10

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayAbs(arr, SIZEARR);

    return 0;
}

