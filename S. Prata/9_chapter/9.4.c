//-------------------------------------------------
//Date: 25.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 4
//-------------------------------------------------

#include <stdio.h>
#include "def_func.h"

double garm(double x, double y);

void main(void)
{
	double x, y;

	
	printf("Enter x = ");
	x = get_double();

	
	printf("Enter y = ");
	y = get_double();

	
	printf("garm = %.2f", garm(x, y));
	return;
}

double garm(double x, double y)
{
	double garm;
	garm = 2.0 / ((1.0/x) + (1.0/y));
	return garm;
}