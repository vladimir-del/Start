//-------------------------------------------------
//Date: 07.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 4
// Programming exercise 1
//-------------------------------------------------

#include<stdio.h>
#define H_IN_M 60

int main(void)
{
int min, minInHours, hours;
printf("Enter number of minuts >= 0 or <= 0 for exit \n");
scanf("%d", &min);
    while (min > 0)
    {
        hours  = min / H_IN_M;
        minInHours = min % H_IN_M;
        printf("%d minuts this is %d houurs and %d minuts\n", min, hours, minInHours);
        printf("\nEnter number of minuts >= 0 or <= 0 for exit \n");
        scanf("%d", &min);
    }
    printf("Exit programm\n");
    return 0;
}