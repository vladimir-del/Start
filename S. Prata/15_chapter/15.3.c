/*-------------------------------------------------
//Date: 17.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 15
//Programming exercise 3
//-------------------------------------------------
/* 
Text programmming exersice.
3. Write a function that takes an int argument and returns the number of “on” bits in the
argument. Test the function in a program. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BIT 8

void oneorzero(int);

int main(void)
{
    int num = 6;

	oneorzero(num);

    return 0;
}

void oneorzero(int n)
{  
	int mask = 1;
	int i = 0;
	while(i < BIT)
	{
		if (((n >> i) & mask) == 1) 
			printf("Bit %d is ON\n", i);
		else 
			printf("Bit %d is Off\n", i);
		i++;
	}	
}
