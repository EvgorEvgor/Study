// Задача callCost
// Условие задачи 

// Считать с клавиатуры 2 целых числа - номер телефона и количество минут.
//  Стоимость минуты разговора составляет 1$ за звонок на городской номер и 40$ за 
// звонок на короткий номер. За звонок по номерам специальных служб плата не взимается. 
// В случае неопределенности вывести -1.
// Пример ввода 
// 1488666 10
// Пример вывода 
// 10$
// Пояснение 

// Коротким номером считается любой трехзначный номер.
//  Городским номером считается любой семизначный номер.
//  Номера телефонов не могут начинаться с ноля.
//  Номера спецслужб: 101, 102, 103, 104, 112.

//code works

#include <stdio.h>

int main() {
    int callPhone, callTime;
    
    scanf("%d %d", &callPhone, &callTime);
    
    if ( callPhone > 999999 && callPhone < 10000000 ) {
        printf("%d$\n", callTime*1);
    } else if ( callPhone == 101 || callPhone == 102 || callPhone == 103 || callPhone == 104 || callPhone == 112 ) {
        printf("%d$\n", 0);
    } else if ( callPhone > 99 && callPhone < 1000 ) {
        printf("%d$\n", callTime*40);
    } else {
        printf("%d\n", -1);
    }
    
    return 0;
}
