// Задача matrixCopy
// Условие задачи 

// void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

//epic win

#include <stdio.h>

#define SIZE 3

void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            target[i][j] = source[i][j];
        }
    }
}

int main() {
    int arr1[SIZE][SIZE] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int arr2[SIZE][SIZE];

    matrixCopy(arr1, arr2, SIZE);

    return 0;
}