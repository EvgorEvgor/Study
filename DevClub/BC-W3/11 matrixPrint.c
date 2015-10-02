// Задача matrixPrint
// Условие задачи 

// void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size);
//  Столбец – первый индекс, строка – второй.


// epic win

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

int main() {
    int arr[SIZE][SIZE] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    FILE *write = fopen("task.out", "w");

    matrixPrint(write, arr, SIZE);

    fclose(write);

    return 0;
}
