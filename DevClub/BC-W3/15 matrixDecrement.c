// Задача matrixDecrement

// Условие задачи

// void matrixDecrement(int matrix[SIZE][SIZE], int decrement[SIZE][SIZE], int size)

//epic win

#include <stdio.h>

#define SIZE 3

void matrixDecrement(int matrix[SIZE][SIZE], int decrement[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            matrix[i][j] -= decrement[i][j];
        }
    }
}

int main() {
    int arr1[SIZE][SIZE] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int arr2[SIZE][SIZE] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

    matrixDecrement(arr1, arr2, SIZE);

    return 0;
}
