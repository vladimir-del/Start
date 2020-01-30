//-------------------------------------------------
//Date: 30.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 9
//-------------------------------------------------

/* 
Text programmming exersice.

Write a program that initializes a two-dimensional 3×5 array-of- double and uses a VLAbased 
function to copy it to a second two-dimensional array. Also provide a VLA-based
function to display the contents of the two arrays. The two functions should be capable,
in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable
compiler, use the traditional C approach of functions that can process an N×5 array). 

*/

#include <stdio.h>
#define ROW 3
#define COL 5

void func_cpy(int num_row, int num_col, double (*arr_from)[num_col], double (*arr_to)[num_col]);

void func_print(int num_row, int num_col, double (*arr)[num_col]);

void main(void)
{
	double array [ROW][COL] = {
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{1.0, 2.0, 3.0, 4.0, 5.0},
		{1.2, 2.2, 3.2, 4.2, 5.2}
	};
	
	double array_target[ROW][COL] = {0};
	
	func_cpy(ROW, COL, array, array_target);
	
	func_print(ROW, COL, array_target);
	
	return;
}


void func_cpy(int num_row, int num_col, double (*arr_from)[num_col], double (*arr_to)[num_col])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int l = 0; l < COL; l++)
			*(*(arr_to + i) + l) = *(*(arr_from + i) + l);
	}
}


void func_print(int num_row, int num_col, double (*arr)[num_col])
{
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < num_col; l++)
			printf("%.2lf ", *(*(arr + i) + l));
		printf("\n");
	}
}