// 34 Задача strRot13()

// Условие задачи 

// Написать функцию:
//  void strRot13(char str[])
//  Зашифровать строку по алгоритму ROT13

//  

// ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
// NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm

// На языке программирования Python алгоритм выглядит следующим образом:
// def rot13(text): 
//     rot13ed = ''
//     for letter in text:
//         byte = ord(letter)
//         capital = (byte & 32) 
//         byte &= ~capital
//         if ord('A') <= byte <= ord('Z'):
//             byte -= ord('A')
//             byte += 13
//             byte %= 26
//             byte += ord('A')
//         byte |= capital
//         rot13ed += chr(byte)
//     return rot13ed

// Оптимизированный вариант:
// def rot13(text):
//     sub = 'NOPQRSTUVWXYZABCDEFGHIJKLM[\]^_`nopqrstuvwxyzabcdefghijklm'
//     res = []
//     for letter in text:
//         res.append(sub[ord(letter)-65])
//     return ''.join(res)

#include <stdio.h>

void strRot13(char str[]) {
    for ( int i = 0, charI = str[0]; charI != '\0'; i++, charI = str[i] ) {
        if ( charI >= 'a' && charI <= 'm' ) {
            str[i] += 13;
        } else if ( charI > 'm' && charI <= 'z' ) {
            str[i] -= 13;
        } else if ( charI >= 'A' && charI <= 'M' ) {
            str[i] += 13;
        } else if ( charI > 'M' && charI <= 'Z' ) {
            str[i] -= 13;
        }
    }
}

int main() {
    char str[101] = "1ABCDEFGHIJKLMNOPQRSTUVWXYZ2abcdefghijklmnopqrstuvwxyz";

    printf("%s\n", str);

    strRot13(str);

    printf("%s\n", str);

    return 0;
}
