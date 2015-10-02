// Задача factorial()
// Условие задачи 

// int factorial(int n)
//  Использовать рекурсию.
//  В случае неопределенности возвращать -1.

// almost win

#include <stdio.h>

int factorial(int n) {
    if ( n > 1 ) {
        return n * factorial(n-1);
    }
    if ( n < 0 ) {
        return -1;
    }
    return 1;
}

int main() {
    int a;

    scanf("%d", &a);

    printf("%d\n", factorial(a));

    return 0;
}