// 16 Задача arraySearch()
// Условие задачи 

// Написать функцию, возвращающую индекс искомого числа в массиве либо -1 в случае, 
// если число в массиве не содержится.
//  int arraySearch(int array[], int size, int needle)

//epic win

#include <stdio.h>

#define SIZEARR 10

int arraySearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[SIZEARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d\n", arraySearch(arr, SIZEARR, 5));
    printf("%d\n", arraySearch(arr, SIZEARR, 11));

    return 0;
}
