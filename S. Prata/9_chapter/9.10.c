//-------------------------------------------------
//Date: 26.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 10
//-------------------------------------------------

#include <stdio.h>

#include "def_func.h"

void fib(int x);

void main(void)

{
	int x, y;
	printf("Enter x = ");
	x = get_int();
	
	while(x < 0)
	{
		printf("Input number above '0'\n");
		x = get_int();
	}
	
	fib(x);
	return;

}

void fib(int x)

{
	int i, temp1, temp2, rez, a;
	a= 0;
	temp2 = 1;
	temp1 = 1;
	if (x == 0)
		printf("F%d = %d\n", 0, 0);
	else if (x == 1)
	{
		printf("F%d = %d\n", 0, 0);
		printf("F%d = %d\n", 1, 1);
	}
	else if (x == 2)
	{
		printf("F%d = %d\n", 0, 0);	
		printf("F%d = %d\n", 1, 1);
		printf("F%d = %d\n", 2, 1);
	}
	else if (x > 2)
	{
		printf("F%d = %d\n", 0, 0);
		printf("F%d = %d\n", 1, 1);
		printf("F%d = %d\n", 2, 1);
			for (i = 3; i < x; i++)
		{
			printf("F%d = %d\n", i, temp1 + temp2);
			a = temp1;
			temp1 = temp2;
			temp2 = a + temp1;
		}
	}
	
}