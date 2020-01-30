//-------------------------------------------------
//Date: 29.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 8
//-------------------------------------------------

/* 
Text programmming exersice.
******
*/

#include <stdio.h>
#define ELEMETS 7

void copy_ptr(int *ArrTo, int *ArrFrom, int num);


void main(void)
{
	int array[ELEMETS] = {0, 1, 2, 3, 4, 5, 6};
	int array_target[3] = {0};
	
	copy_ptr(array_target, (array + 2), 3);
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", array_target[i]);
	}
	
	return; 
}

void copy_ptr(int *ArrTo, int *ArrFrom, int num)
{
    for (int i = 0; i < num; i++)
    {
        *(ArrTo + i) = *(ArrFrom + i);
        printf("target arr[%d] = %d\n", i, *(ArrTo + i));
    }
}