/*-------------------------------------------------
//Date: 15.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 15
//Programming exercise 1
//-------------------------------------------------
/* 
Text programmming exersice.
1. Write a function that converts a binary string to a numeric value. That is, if you have
char * pbin = "01001001";
you can pass pbin as an argument to the function and have the function return an int
value of 25 .
*/

#include <stdio.h>
#include <string.h>
#include <math.h>


#define BIT 8

int convert(char *);

int main(void)
{
    char *pbin = "01001001";

    printf("%d\n", convert(pbin));

    return 0;
}

int convert(char *p)
{  
    int sum = 0;
    int i = 0;

    
    while(i < BIT)
    {
        if ( *(p + i) == '1')
           sum += pow(2,(BIT - i - 1));
        //sum += (*(p + i) - 48) * pow(2, (BIT - i - 1));
        i++;

    }
    return sum;
}