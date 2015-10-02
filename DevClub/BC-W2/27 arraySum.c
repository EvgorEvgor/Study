// 13 Задача arraySum()
// Условие задачи 

// Написать функцию:
//  int arraySum(int array[], int size)
//  Вернуть сумму элементов массива.
//  size > 0

//epic win

#include <stdio.h>

#define SIZEARR 10

int arraySum(int array[], int size) {
    int sum = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d\n", arraySum(arr, SIZEARR));

    return 0;
}

