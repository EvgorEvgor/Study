// Задача matrixIncrement

// Условие задачи 

// void matrixIncrement(int matrix[SIZE][SIZE], int increment[SIZE][SIZE], int size)

//epic win

#include <stdio.h>

#define SIZE 3

void matrixIncrement(int matrix[SIZE][SIZE], int increment[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            matrix[i][j] += increment[i][j];
        }
    }
}

int main() {
    int arr1[SIZE][SIZE] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int arr2[SIZE][SIZE] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

    matrixIncrement(arr1, arr2, SIZE);

    return 0;
}
