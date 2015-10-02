// 29 Задача strEqual()

// Условие задачи 

// int strEqual(char str1[], char str2[])

//  Выяснить, равны ли строки.

// almost win

#include <stdio.h>

#define LIMIT 101

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char str1[11] = "ABCDEFGHIJ";
    char str2[11] = "ABCDEFGHIJ";

    printf("%d\n", strEqual(str1, str2));

    return 0;
}
