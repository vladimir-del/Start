//-------------------------------------------------
//Date: 10.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 5
//-------------------------------------------------

#include<stdio.h>

int main(void)
{
    int day;
    printf("Enter number\n");
    scanf("%d", &day);
    int sum, i;
    sum = i = 0;

    while (i++<day)
    {
        sum = sum + i*2;
        printf("%d in %d day\n", sum, i);
    }
    printf("Exit\n");
    return 0;
    
}