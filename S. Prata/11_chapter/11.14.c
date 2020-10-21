//-------------------------------------------------
//Date: 21.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 14
//-------------------------------------------------

/* 
Text programmming exersice.
14. Write a power-law program that works on a command-line basis. The first command-line
argument should be the type double number to be raised to a certain power, and the
second argument should be the integer power. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    double power = 0;
    char * pEnd;

    float rez = strtof(argv[1], &pEnd);

    for (int i = 1; i < (*argv[2] & 0x0f); i++)
    {
        rez *= strtof(argv[1], &pEnd);
    }

    printf("%-10.4f\n", rez);
    return 0;
	
}