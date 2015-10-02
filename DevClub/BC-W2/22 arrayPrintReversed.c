// Задача arrayPrintReversed()
// Условие задачи 

// Написать функцию:
//  void arrayPrintReversed(int array[], int size)
//  Распечатать массив на экран в строку через пробел в обратном порядке.

// epic win

#include <stdio.h>

#define SIZEARR 10

void arrayPrintReversed(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayPrintReversed(arr, 10);

    return 0;
}
