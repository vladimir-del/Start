//-------------------------------------------------
//Date: 31.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 11
//-------------------------------------------------

/* 
Text programmming exersice.

Write a program that declares a 3×5 array of int and initializes it to some values of
your choice. Have the program print the values, double all the values, and then display
the new values. Write a function to do the displaying and a second function to do the
doubling. Have the functions take the array name and the number of rows as arguments. 

*/

#include <stdio.h>

#define ROW 3
#define COL 5

void func_print(int num_row, int (*arr)[COL]);
void func_mult(int num_row, int (*arr)[COL]);

void main(void)
{
	int array [ROW][COL] = {
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 34, 4, 5}
	};
	
	func_print(ROW, array);
	
	func_mult(ROW, array);
	
	printf("After multiply to 2\n");
		
	func_print(ROW, array);
}

void func_print(int num_row, int (*arr)[COL])
{
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < COL; l++)
			printf("%d ", *(*(arr + i) + l));
		printf("\n");
	}
}

void func_mult(int num_row, int (*arr)[COL])
{
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < COL; l++)
			*(*(arr + i) + l) *= 2;
		
	}
}