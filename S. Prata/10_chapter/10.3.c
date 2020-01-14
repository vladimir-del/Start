//-------------------------------------------------
//Date: 14.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 3
//-------------------------------------------------

/* 
Text programmming exersice.

Write a function that returns the largest value stored in an array-of- int . Test the function
in a simple program.
*/

#include <stdio.h>

#define ELEMENTS 5

int max_val(int *Arr, int num);

void main(void)
{
    int array[ELEMENTS] = {0, 122 ,10, 455, 84};
    printf("Max value array = %d\n", max_val(array, ELEMENTS));
    return;
}

int max_val(int *Arr, int num)
{
    int temp = *Arr;
    for (int i = 0; i < ELEMENTS; i++)
    {
        if (temp < *(Arr + i))
            temp = *(Arr + i);
    }
    return temp;
}