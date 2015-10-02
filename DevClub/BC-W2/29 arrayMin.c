// 15 Задача arrayMin
// Условие задачи 

// Написать функцию:
//  int arrayMin(int array[], int size)
//  Вернуть значение минимального элемента в массиве.

// epic win
 
#include <stdio.h>

#define SIZEARR 10

int arrayMin(int array[], int size) {
    int min = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] < min ) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d\n", arrayMin(arr, SIZEARR));

    return 0;
}