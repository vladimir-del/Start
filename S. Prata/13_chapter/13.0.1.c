//-------------------------------------------------
//Date: 03.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
// Review questions 6
//-------------------------------------------------

/* 
Text programmming exersice.
4. Write a program that takes zero command-line arguments or one command-line
argument. If there is one argument, it is interpreted as the name of a file. If there is no
argument, the standard input ( stdin) is to be used for input. Assume that the input
consists entirely of floating-point numbers. Have the program calculate and report the
arithmetic mean (the average) of the input numbers. 
*/

#include <stdio.h>
#include <stdlib.h>

double funcAver(int num_elem, double *arr);

int main (int argc, char **argv)
{
	FILE *fa;
	double temp[80];
	int i = 0;
	double num;
	if (argc > 2)
	{
		puts("More than 1 argc");
		exit(1);
	}
	
	puts("Enter max 80 double numbers");
	while(scanf("%lf", &num) == 1)
	{
		temp[i] = num;
		i++;
	}
	int num_elem = i;
	if (argc == 1)
	{
		for (int i = 0; i < num_elem; i++)
			printf("%5.2f ", temp[i]);
		printf("\n%5.2f", funcAver(num_elem, temp));
	}
	else
	{
		if ((fa = fopen(argv[1], "w+")) == NULL)
		{
			puts("Cannot open file");
			exit(2);
		}
		for (int i = 0; i < num_elem; i++)
			fprintf(fa, "%5.2f ", temp[i]);
		fprintf(fa, "\n%5.2f", funcAver(num_elem, temp));
	}
	return 0; 
}
double funcAver(int num_elem, double *arr)
{
	double temp = 0;
	double rezult;
	for (int i = 0; i < num_elem; i++)
		temp += arr[i];
	return rezult = temp / num_elem;
}
