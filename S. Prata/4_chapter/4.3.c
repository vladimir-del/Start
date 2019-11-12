//-------------------------------------------------
//Date: 10.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 4
// Programming exercise 3
//-------------------------------------------------

#include<stdio.h>

int main(void)
{
    int num, week, dayweek;
    printf("Enter number day or 0 for exit\n");
    scanf("%d", &num);
    while (num>0)
    {
        week = num / 7;
        dayweek = num % 7;
        printf("%d days is %d week and %d days\n", num, week, dayweek);
        printf("-------------------------\n");
        printf("\nEnter number day\n");
        scanf("%d", &num);
    }

    printf("You input invalid number. Exit\n");
}