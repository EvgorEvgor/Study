// 11 Задача intScan()
// Условие задачи 

// int intScan(FILE *in)
//  Считать число из файла и вернуть его
//  

//epic win

#include <stdio.h>

int intScan(FILE *in) {
    int number;

    fscanf(in, "%d", &number);
    return number;
}

int main() {
    FILE *read = fopen("task.in", "r");

    fclose(read);

    return 0;
}
