// Задача prime
// Условие задачи 

// Вывести N-ное по счёту простое число (см. Википедию).
//  N считать с клавиатуры.
//  Оптимизировать работу программы, насколько это возможно.
//  В случае неопределенности ответа вывести -1.
// Пример ввода 
// 3
// Пример вывода 
// 5

// code works


#include <stdio.h>

int isPrime(int n) {
    if ( n == 2 ) {
        return 1;
    }
    if ( n % 2 == 0 ) {
        return 0;
    }
    
    for ( int i = 3; i < n; i += 2 ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a;
    int lastPrime = 3;
    
    scanf("%d", &a);
    
    if ( a < 1 ) {
        printf("%d\n", -1);
        return 0;
    }
    
    if ( a == 1 ) {
        printf("%d\n", 2);
        return 0;
    }
    
    for ( int i = 2; i <= a; lastPrime += 2 ) {
        if ( isPrime(lastPrime) == 1 ) {
            i += 1;
        }
    }
    lastPrime -= 2;
    printf("%d\n", lastPrime);
    
    return 0;
}
