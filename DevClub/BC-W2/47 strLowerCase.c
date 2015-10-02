// 33 Задача strLowerCase()

// Условие задачи 

// void strLowerCase(char str[])

//code works

#include <stdio.h>

void strLowerCase(char str[]) {
    for ( char *s = str; *s != '\0'; s++ ) {
        if ( *s >= 'A' && *s <= 'Z' ) {
            *s += 32;
        }
    }
}

int main() {
    char str1[11] = "ABCD1abcd2";

    strLowerCase(str1);

    printf("%s\n", str1);

    return 0;
}
