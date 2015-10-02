// Задача matrixRotate90

// Условие задачи 

// void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

//  Поворот матрицы на 90 градусов по часовой стрелке.

//code works

#include <stdio.h>

#define SIZE 3

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[last][row]);
    }
}

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, new = size - 1 - row; col < size; col++ ) {
            target[new][col] = source[col][row];
        }
    }
}

int main() {
    int arr1[SIZE][SIZE] = {1, 4, 7, 2, 5, 8, 3, 6, 9};
    int arr2[SIZE][SIZE];
    FILE *write = fopen("task.out", "w");

    matrixRotate90(arr2, arr1, SIZE);
    
    matrixPrint(write, arr2, SIZE);

    fclose(write);
    return 0;
}
