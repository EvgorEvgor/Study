// 28 Задача strReverse

// Условие задачи 

// В файле task.in дана строка длиной не более 100 символов.
//  Прочитать строку в память и произвести ее реверс.
//  Результат вывести в task.out.
// Пример ввода 
// hello
// Пример вывода 
// olleh

//code works

#include <stdio.h>

#define LIMIT 101

int strLen(char str[]) {
    int lenght = 0;
    
    for ( ; str[lenght] != '\0'; lenght++ );
    return lenght;
}

void arrayReverse(char array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        char buffer = array[i];
        
        array[i] = array[j];
        array[j] = buffer;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT];
    
    fscanf(in, "%s", str);
    fclose(in);
    
    arrayReverse(str, strLen(str));
    
    fprintf(out, "%s\n", str);
    fclose(out);
    
    return 0;
}
