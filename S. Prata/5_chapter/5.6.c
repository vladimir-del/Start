//-------------------------------------------------
//Date: 14.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 6
//-------------------------------------------------

#include<stdio.h>

int main(void)
{
    int day;
    printf("Enter number days\n");
    scanf("%d", &day);
    int sum, i;
    sum = i = 0;

    while (i++<day)
    {
        sum = sum + i * i;
        printf("%d in %d day\n", sum, i);
    }
    printf("Exit\n");
    return 0;
    
}