// 25 Задача arraySort()

// Условие задачи 

// Написать функцию:
//  void arraySort(int array[], int size)
//  Отсортировать элементы в порядке неубывания.
//  Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.


// code works

#include <stdio.h>

#define MAXITEM 10

void arraySort(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        for ( int j = i + 1; j < size; j++ ) {
            int buffer = array[i];
            
            if ( array[j] < array[i] ) {
                array[i] = array[j];
                array[j] = buffer;
            }
        }
    }
}


int main() {
    int array[MAXITEM] = {1, 2, 4, 4, 5, 6, 7, 6, 2, 3};
    
    arraySort(array, MAXITEM);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

