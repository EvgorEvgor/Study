// 8 Задача divMN
// Условие задачи 

// Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
//  Вывести на экран в столбик целые числа от min до max включительно, которые без остатка делятся как на m, так и на n.
//  В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.
// Пример ввода 
// 0 12 2 3
// Пример вывода 
// 0
// 6
// 12

//code works

#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int min, max, m, n;
    int multiple, step;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    step = lcm(m, n);
    
    multiple = min - min % step;
    if ( multiple < min ) {
        multiple += step;
    }
    
    for ( ; multiple <= max; multiple += step ) {
        printf("%d\n", multiple);
    }
    
    return 0;
}
