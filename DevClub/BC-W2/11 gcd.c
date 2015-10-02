// 6 Задача gcd()
// Условие задачи 

// Написать функцию, которая находит наибольший общий делитель.
//  int gcd(int a, int b)

//  Передаваемые значения больше нуля.

// epic win

#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {

    for ( int i = 1; i <= 5; i++) {
        for (int j = 10; j > i; j--) {
            printf("%d %d Total divisor %d\n", i, j, gcd(i,j));
        }
    }

    return 0;
}
