// Задача pointerIncrement() 

// Условие задачи 

// void pointerIncrement(int *value)

//  Увеличить на единицу значение по переданному адресу value.

// epic win

#include <stdio.h>

#define SIZEARR 10

void pointerIncrement(int *value) {
    *value += 1;
}

int main() {
    int a = 15;
    
    pointerIncrement(&a);

    return 0;
}
