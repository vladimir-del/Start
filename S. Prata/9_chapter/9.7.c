//-------------------------------------------------
//Date: 26.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 7
//-------------------------------------------------

#include <stdio.h>
#include <ctype.h>
#include "def_func.h"

double power(double p, int n);

void main(void)

{
	double x;
	int y;
	
	printf("Enter x = ");
	x = get_int();

	
	printf("Enter y = ");
	y = get_int();

	printf("Number %.2f to the extend %d equally %.5f", x, y, power(x ,y));
	
	return;
}

double power(double p, int n)
{
	double tmp = 1;
	double rez = 1;
	
	if (n > 0)
		for (int i = 0; i < n; i++)
		{
			rez *= p;
		}
	else if (n < 0)
	{
		for (int i = 0; i < (n * (-1)); i++)
		{
			tmp *= p;
			rez = 1 / tmp;
		}
	}
	else if (p == 0)
		rez = 0;
	else if (n == 0)
		rez = 1;
return rez;
}