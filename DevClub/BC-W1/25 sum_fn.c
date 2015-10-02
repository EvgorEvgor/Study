// Задача sum() 
// Условие задачи 

// Написать функцию
//  int sum(int x, int y)

// epic win

#include <stdio.h>

int sum(int x, int y) {
   return x + y;
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));
    
    return 0;
}
