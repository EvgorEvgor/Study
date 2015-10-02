// 14 Задача arrayMax()
// Условие задачи 

// Написать функцию:
//  int arrayMax(int array[], int size)
//  Вернуть значение максимального элемента в массиве.
// 
//epic win

#include <stdio.h>

#define SIZEARR 10

int arrayMax(int array[], int size) {
    int max = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] > max ) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d\n", arrayMax(arr, SIZEARR));

    return 0;
}