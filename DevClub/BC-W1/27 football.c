// Задача football

// Условие задачи 

// Считать с клавиатуры 2 целых положительных числа, количество забитых голов хозяевами 
// и гостями на футбольном матче. Вывести на экран результат матча «Home team wins», 
// «Away team wins», «Draw».
// Пример ввода 
// 7 0
// Пример вывода 
// Home team wins

// code works

#include <stdio.h>

int main() {
    int homeWins, awayWins;
    
    scanf("%d %d", &homeWins, &awayWins);
    
    if ( homeWins > awayWins) {
        printf("Home team wins\n");
    } else if ( homeWins < awayWins) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}