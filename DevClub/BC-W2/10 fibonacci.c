// Задача fibonacci()
// Условие задачи 

// int fibonacci(int n)
//  Использовать рекурсию.

// code work

#include <stdio.h>

int fibonacci(int n) {
    if ( n > 2 ) {
        return fibonacci(n-1) + fibonacci(n-2);
    } else if ( n == 0 ) {
        return 0;
    } else if ( n > -2 ) {
        return 1;
    } 
    return fibonacci(n+2) - fibonacci(n+1);
}


int main() {
    int a;

    scanf("%d", &a);

    printf("%d\n", fibonacci(a));

    return 0;
}