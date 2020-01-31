//-------------------------------------------------
//Date: 31.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 13-14
//-------------------------------------------------

/* 
Text programmming exersice.

13. Write a program that prompts the user to enter three sets of five double numbers each.
(You may assume the user responds correctly and doesn’t enter non-numeric data.) The
program should accomplish all of the following:
 a. Store the information in a 3×5 array.
 b. Compute the average of each set of five values.
 c. Compute the average of all the values.
 d. Determine the largest value of the 15 values.
 e. Report the results.
Each major task should be handled by a separate function using the traditional C
approach to handling arrays. Accomplish task “b” by using a function that computes
and returns the average of a one-dimensional array; use a loop to call this function three
times. The other tasks should take the entire array as an argument, and the functions
performing tasks “c” and “d” should return the answer to the calling program. 

14. Do Programming Exercise 13, but use variable-length array function parameters. 

*/

#include <stdio.h>

#define ROW 3
#define COL 5

void func_input(int num_row, double(*arr)[COL]);
void func_print(int num_row, double (*arr)[COL]);
double func_average(int num_elemets, int num_row, double (*arr)[COL]);
double func_average_all(int num_row, double(*arr)[COL]);
double func_max(int num_row, double (*arr)[COL]);

int main (void)

{
	//double array [ROW][COL] = {0};
	
	double array [ROW][COL] = {
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{1.0, 2.0, 3.0, 4.0, 5.0},
		{1.2, 2.2, 3.2, 4.2, 5.9}
	};
	
	//func_input(ROW, array);
	
	func_print(ROW, array);
	
	for (int i = 0; i < ROW; i++)
	{
		printf("Averrage value for row = %d has value = %8.2lf",i, func_average(COL, i, array));
		printf("\n");
	}
	
	printf("All averrage has value = %8.2lf\n", func_average_all(ROW, array));
	
	printf("Max value from arr = %8.2lf\n", func_max(ROW, array));
	

}

void func_input(int num_row, double(*arr)[COL])
{
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < COL; l++)
			scanf("%lf", &(*(*(arr + i) + l)));
	}
}

void func_print(int num_row, double (*arr)[COL])
{
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < COL; l++)
			printf("%8.2lf ", *(*(arr + i) + l));
		printf("\n");
	}
}

double func_average(int num_elemets, int num_row, double (*arr)[COL])
{
	double average = 0.0;
	double temp = 0.0;
	for (int i = 0; i < num_elemets; i++)
		temp += *(*(arr + num_row) + i);
	return average = temp / COL;
}

double func_average_all(int num_row, double(*arr)[COL])
{
	double average_all = 0.0;
	double temp_all = 0.0;
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < COL; l++)
			temp_all += *(*(arr + i) + l);
	}
	return average_all = temp_all / (num_row * COL);
}

double func_max(int num_row, double (*arr)[COL])
{
	double temp_max = 0;
	for (int i = 0; i < num_row; i++)
	{
		for (int l = 0; l < COL; l++)
		{
			if ( temp_max < (*(*(arr + i) + l)) )
				temp_max = *(*(arr + i) + l);
		}
			
	}
	return temp_max;
}