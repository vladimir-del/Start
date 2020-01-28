//-------------------------------------------------
//Date: 28.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 6
//-------------------------------------------------

/* 
Text programmming exersice.
******
*/

#include <stdio.h>

#define ELEMENTS 5

double func_change(double *Arr, int num);

void main(void)
{
	double array[ELEMENTS] = {0.1, 5, 6.5, 55, 4.2};
	
	printf("Origin array\n");
	
	for (int i = 0; i < ELEMENTS; i++)			
	{
		printf("array[%d] = %.2lf \n", i, *(array + i));
	}	
	
	func_change(array, ELEMENTS);
	printf("\n");
	
	printf("Change array\n");
	for (int i = 0; i < ELEMENTS; i++)
	{
		printf("array[%d] = %.2lf \n", i, *(array + i));
	}	
	
return;
}

double func_change(double *Arr, int num)
{
	double array_temp[ELEMENTS] = {0};
	for (int i = 0; i < ELEMENTS; i++)
	{
		*(array_temp + (ELEMENTS - 1) - i) = *(Arr + i);
	}
	
	for (int i = 0; i < ELEMENTS; i++)
	{
		*(Arr + i) = *(array_temp + i);
	}
}