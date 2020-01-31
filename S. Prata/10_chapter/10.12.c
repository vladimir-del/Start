//-------------------------------------------------
//Date: 31.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 11
//-------------------------------------------------

/* 
Text programmming exersice.

Rewrite the rain program in Listing 10.7so that the main tasks are performed by
functions instead of in main() .  

*/

#include <stdio.h>

#define MONTHS 12 // number of months in a year
#define YEARS 5 // number of years of data

double func_rainfall(int year, double (*arr)[MONTHS]);

int main(void)
{
// initializing rainfall data for 2010 - 2014
const double rain[YEARS][MONTHS] =
{
{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
};

int year, month;
float subtot, total;

printf(" YEAR RAINFALL (inches)\n");

func_rainfall(YEARS, rain);

printf("\nThe yearly average is %.1lf inches.\n\n", total/YEARS);
printf("MONTHLY AVERAGES:\n\n");
printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
printf(" Nov Dec\n");

for (month = 0; month < MONTHS; month++)
	{ // for each month, sum rainfall over years
		for (year = 0, subtot =0; year < YEARS; year++)
		subtot += rain[year][month];
		printf("%4.1f ", subtot/YEARS);
	}
printf("\n");

return 0;
}

double func_rainfall(int year, double (*arr)[MONTHS])
{
	double total, subtot;
	for (int year = 0, total = 0; year < YEARS; year++)
	{
		for (int month = 0, subtot = 0; month < MONTHS; month++)
		subtot += arr[year][month];
		printf("%5d %15.1f\n", 2010 + year, subtot);
		total += subtot; 
	}
	
	return total;
}
