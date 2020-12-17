/*-------------------------------------------------
//Date: 17.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 15
//Programming exercise 4
//-------------------------------------------------
/* 
Text programmming exersice.
4.  Write a function that takes two int arguments: a value and a bit position. Have the
function return 1 if that particular bit position is 1, and have it return 0 otherwise. Test
the function in a program. 
*/

#include <stdio.h>
#include <stdbool.h>

#define BIT 8

bool returnvaluebit(int, int);

int main(void)
{
    int num = 125;
	int position = 2;

	printf("Bit %d in this position is %d", position, returnvaluebit(num, position));

    return 0;
}

bool returnvaluebit(int num, int pos)
{  
	int mask = 1;
		if ((num >> pos & mask) == 1) 
		return true;
		else 
		return false;
}
