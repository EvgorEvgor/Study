// 32 Задача strUpperCase()

// Условие задачи 

// void strUpperCase(char str[])

//code works

#include <stdio.h>

void strUpperCase(char str[]) {
    for ( char *s = str; *s != '\0'; s++ ) {
        if ( *s >= 'a' && *s <= 'z' ) {
            *s -= 32;
        }
    }
}

int main() {
    char str1[11] = "ABCD1abcd2";

    strUpperCase(str1);

    printf("%s\n", str1);

    return 0;
}
