// Задача arrayCopy()
// Условие задачи 

// Написать функцию
//  void arrayCopy(int destination[], int source[], int size)

// epic win

#include <stdio.h>

#define SIZEARR 10

void arrayCopy(int destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i] = source[i];
    }
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrCopy[SIZEARR];
    arrayCopy(arr, arrCopy, SIZEARR);

    return 0;
}

