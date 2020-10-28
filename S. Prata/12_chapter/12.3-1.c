//-------------------------------------------------
//Date: 28.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 3
//-------------------------------------------------

#include <stdio.h>

int set_mode(int mode_from_main)
{
	int mode_rez = 0;
	const char *s1 = "(US)";
	const char *s2 = "(Metric)";
	if (mode_from_main <= 1)
	{
		mode_rez = mode_from_main;
	}
	else
	printf("Invalid mode specified. Mode %d %s used.\n", mode_rez, mode_rez ? s1 : s2);
	return mode_rez;

}
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