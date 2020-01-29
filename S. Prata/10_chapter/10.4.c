//-------------------------------------------------
//Date: 28.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 4
//-------------------------------------------------

/* 
Text programmming exersice.

Write a function that returns the index of the largest value stored in an array-of- double .
Test the function in a simple program.
*/

#include <stdio.h>

#define ELEMENTS 5

int max_index(double *Arr, int num);

void main(void)
{
    double array[ELEMENTS] = {0, 1122.5 ,10.95959, 455.2, 84.2828};
    printf("Max value in index array = %d\n", max_index(array, ELEMENTS));
    return;
}

int max_index(double *Arr, int num)
{
    double temp = *Arr;
	int index = 0;
    for (int i = 0; i < ELEMENTS; i++)
    {
        if (temp < *(Arr + i))
		{
			temp = *(Arr + i);
			index = i;
		}
    }
    return index;
}