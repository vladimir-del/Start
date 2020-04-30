//-------------------------------------------------
//Date: 30.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 10
//-------------------------------------------------

/* 
Text programmming exersice.

Write a function that sets each element in an array to the sum of the corresponding
elements in two other arrays. That is, if array 1 has the values 2, 4, 5, and 8 and array 2
has the values 1, 0, 4, and 6, the function assigns array 3 the values 3, 4, 9, and 14. The
function should take three array names and an array size as arguments. Test the function
in a simple program.

*/

#include <stdio.h>

#define ELEMENTS 4

void func_cpy(int num, int *arr1, int *arr2, int *arr_rez);
void func_print(int num, int *arr);

void main(void)
{
	int array1 [ELEMENTS] = {1, 2, 3, 4};
	int array2 [ELEMENTS] = {5, 6, 7, 8};
	int array_rezults [ELEMENTS] = {0};
	
	func_cpy(ELEMENTS, array1, array2, array_rezults);
	func_print(ELEMENTS, array_rezults);
	
	return;
}

void func_cpy(int num, int *arr1, int *arr2, int *arr_rez)
{
	for (int i = 0; i < num; i++)
		*(arr_rez + i) = *(arr1 + i) + *(arr2 + i);
	
}

void func_print(int num, int *arr)
{
	for(int i = 0; i < num; i++)
		printf("%d ", *(arr + i));
}