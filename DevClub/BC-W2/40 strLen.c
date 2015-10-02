// 26 Задача strLen()

// Условие задачи 

// int strLen(char str[])

//  Подсчитать длину заданной строки.

// epic win

#include <stdio.h>

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

int main() {
	char str[11] = "ABCDEFGHIJ";

	printf("%d\n", strLen(str));

	return 0;
}