// Задача fileSum
// Условие задачи 

// Считать два числа из файла task.in.
//  Записать их сумму в файл task.out.
// Пример ввода 
// 10 20
// Пример вывода 
// 30

//code works

#include <stdio.h>

int main() {
    FILE *read = fopen("task.in", "r");
    FILE *write = fopen("task.out", "w");
    int a, b;
    
    fscanf(read, "%d %d", &a, &b);
    fprintf(write, "%d\n", a+b);
    
    fclose(read);
    fclose(write);
    
    return 0;
}
