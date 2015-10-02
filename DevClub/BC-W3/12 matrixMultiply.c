// Задача matrixMultiply

// Условие задачи 

// void matrixMultiply(int matrix[SIZE][SIZE], int size, int multiplier)

// epic win

#include <stdio.h>

#define SIZE 3

void matrixMultiply(int matrix[SIZE][SIZE], int size, int multiplier) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            matrix[i][j] *= multiplier;
        }
    }
}

int main() {
    int arr[SIZE][SIZE] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

    matrixMultiply(arr, SIZE, 150);

    return 0;
}
