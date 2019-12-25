//-------------------------------------------------
//Date: 25.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 5
//-------------------------------------------------

#include <stdio.h>
#include "def_func.h"

double larger_of (double *x, double *y);

void main (void)

{
	double x, y;
	
	printf("Enter x = ");
	x = get_double();

	
	printf("Enter y = ");
	y = get_double();
	
	printf("x = %.2f and y = %.2f\n", x, y);
	printf("*****\n");
	larger_of(&x, &y);
	printf("Now x = %.2f and y = %.2f", x, y);
	return;
}

double larger_of(double *x, double *y)
{
	if (*x > *y)
	*y = *x;
	else
	*x = *y;
}