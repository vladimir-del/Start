<<<<<<< HEAD
//-------------------------------------------------
//Date: 30.04.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 7
//-------------------------------------------------

/* 
Text programmming exersice.

Write a program that initializes a two-dimensional array-of- double and uses one of the
copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a
two-dimensional array is an array of arrays, a one-dimensional copy function can be used
with each subarray.)
*/

#include <stdio.h>
=======
//-------------------------------------------------
//Date: 29.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 7
//-------------------------------------------------

/* 
Text programmming exersice.
******
*/

#include <stdio.h>

#define ROW 2
#define COL 3

void func_cpy(int num_row, int num_col, double ArrTo[num_row][num_col], double (*ArrFrom)[num_col]);

void main(void)
{
	double array_source[ROW][COL] = {
		{1.1, 2.2, 3.3},
		{4.4, 5.5, 6.6}
		};
	double array_target[ROW][COL];
	
	func_cpy(ROW, COL, array_target, array_source);
	
	for (int i = 0; i < ROW; i++)
	{
		for (int l = 0; l < COL; l++)
		{
			printf("%.2lf ", *(*(array_target + i) + l));
		}
	}	
	
	return;
}

void func_cpy(int num_row, int num_col, double ArrTo[num_row][num_col], double (*ArrFrom)[num_col])
{
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < num_col; l++)
			*(*(ArrTo + i) + l) = *(*(ArrFrom + i) + l);
	}
}
>>>>>>> 5936f95de321e2feec3a398439b75355032620dd
