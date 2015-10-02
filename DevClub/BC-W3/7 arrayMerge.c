// Задача arrayMerge()

// Условие задачи 

// Написать функцию
//  void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

//  Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
//  Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
//  В случае равенства предпочтение отдаётся элементам из первого массива.
//  Требуемая сложность: O(N)

//almost win

#include <stdio.h>

#define MAXITEM1 4
#define MAXITEM2 5

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] <= src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
    for ( ; i < len1; i++, k++ ) {
        target[k] = src1[i];
    }
    for ( ; j < len2; j++, k++ ) {
        target[k] = src2[j];
    }
}

int main() {
    int src1[MAXITEM1] = {0, 1, 2, 3};
    int src2[MAXITEM2] = {0, 1, 2, 3, 4};
    int target[MAXITEM1 + MAXITEM2];
    
    arrayMerge(target, src1, MAXITEM1, src2, MAXITEM2);
    for ( int i = 0; i < MAXITEM1 + MAXITEM2; i++ ) {
        printf("%d\n", target[i]);
    }

    return 0;
}
