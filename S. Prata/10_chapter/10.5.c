//-------------------------------------------------
//Date: 28.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 5
//-------------------------------------------------

/* 
Text programmming exersice.

Write a function that returns the difference between the largest and smallest elements of
an array-of- double . Test the function in a simple program.
*/

#include <stdio.h>

#define ELEMENTS 5

double func(double *Arr, int num);

void main(void)
{
    double array[ELEMENTS] = {56.0, 1122.5 ,1120.95959, 455.2, 84.2828};
    
	printf("Difference value between the largest and smallest element = %.2lf\n", func(array, ELEMENTS));
    return;
}

double func(double *Arr, int num)
{
	double rezult = 0.0;
    double temp_max = *Arr;
	double temp_min = *Arr;
	int index_max = 0;
	int index_min = 0;
    for (int i = 0; i < ELEMENTS; i++)
    {
        if (temp_max < *(Arr + i))
		{
			temp_max = *(Arr + i);
			index_max = i;
		}
    }
	
	for (int i = 0; i < ELEMENTS; i++)
		if (temp_min > *(Arr + i))
		{
			temp_min = *(Arr + i);
			index_min = i;
		}
	
	rezult = *(Arr + index_max) - *(Arr + index_min);
	
    return rezult;
}