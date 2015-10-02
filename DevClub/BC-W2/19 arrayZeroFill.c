// Задача arrayZeroFill()
// Условие задачи 

// Написать функцию:
//  void arrayZeroFill(int array[], int size)
//  Заполнить массив нулями.

//epic win

#include <stdio.h>

#define SIZEARR 10

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayZeroFill(arr, 10);

    return 0;
}
