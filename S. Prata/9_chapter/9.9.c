//-------------------------------------------------
//Date: 26.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 9
//-------------------------------------------------

#include <stdio.h>
#include <ctype.h>
#include "def_func.h"


void to_base_n (int x, int y);

void main (void)

{
	int x, y;
	printf("Enter x = ");
	x = get_int();

	
	printf("Enter y = ");
	y = get_int();
	while(y < 2 || y > 10)
	{
		printf("Input y in range from 2 to 10");
		y = get_int();
	}
	
	to_base_n(x, y);
	
	return;
	
}

void to_base_n(int x, int y)
{
	int r;
	r = x % y;
	if (x >= y)
	to_base_n(x/y , y);
	putchar('0' + r);
	return;
}


