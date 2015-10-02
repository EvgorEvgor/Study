// 22 Задача sliceReverse()

// Условие задачи 

// Написать функцию:
//  void sliceReverse(int array[], int lo, int hi)
//  Осуществить реверс части массива от lo до hi включительно.


// epic win

#include <stdio.h>

#define MAXITEM 11

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int buffer = array[lo];
        
        array[lo] = array[hi];
        array[hi] = buffer;
    }
}

int main() {
    int array[MAXITEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    sliceReverse(array, 3, 7);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
