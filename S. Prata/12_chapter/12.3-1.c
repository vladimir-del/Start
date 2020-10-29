//-------------------------------------------------
//Date: 28.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 3
//-------------------------------------------------

#include <stdio.h>


void get_info(int *range, int *consume, int mode_rez)
{
	if (mode_rez == 0)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%d", range);
		printf("Enter fuel consumed in liters:");
		scanf("%d", consume);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%d", range);
		printf(" Enter fuel consumed in gallons:");
		scanf("%d", consume);
	}

	
}

void show_info(int range, int consume, int mode_rez)
{
	if (mode_rez == 0)
	printf("Fuel consumption is %d liters per 100 km.\n", (100 * consume) / range);
	else
	printf(" Fuel consumption is %d miles per gallon.\n", range / consume);
}