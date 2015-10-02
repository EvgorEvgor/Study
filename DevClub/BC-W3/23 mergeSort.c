// Задача mergeSort
// Условие задачи 

// В файле task.in дано число len и массив размером len элементов.
//  Отсортировать элементы в порядке неубывания.
//  Использовать алгоритм mergeSort.
//  Результат записать в task.out
//  Допустимо использование рекурсии.
//

#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int buffer[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }
    
    for ( int i = lo, k = 0; i < hi; i++, k++ ) {
        array[i] = buffer[k];
    }
}
    
void mergeSort(int array[], int lo, int hi) {
    int mid;
        
    if ( lo < hi - 1 ) {
        mid = (lo + hi) / 2;
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
        merge(array, lo, mid, hi);
    }
}
    
int scanLength(FILE *in) {
    int size;
        
    fscanf(in, "%d", &size);
    return size;
}
    
int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int Length = scanLength(in);
    int array[Length];
        
    for ( int i = 0; i < Length; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    fclose(in);
    
    mergeSort(array, 0, Length-1);
    
    for ( int i = 0; i < Length - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[Length-1]);
    fclose(out);
    
    return 0;
}
