//-------------------------------------------------
//Date: 24.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 1
//-------------------------------------------------

#include <stdio.h>

double min(double x, double y);

void main(void)
{
	float x, y;
	scanf("%f", &x);
	scanf("%f", &y);
	printf("%.2f is min number\n", min(x, y));
	return;
}

double min(double x, double y)
{
	if (x < y)
		return x;
	else
		return y;
}

