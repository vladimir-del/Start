//-------------------------------------------------
//Date: 28.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 2
//-------------------------------------------------

#include <stdio.h>


static int mode;
static int range;
static int consume;
static const char *s1 = "(US)";
static const char *s2 = "(Metric)";

void set_mode(int mode_from_main)
{
	if (mode_from_main <= 1)
	{
		mode = mode_from_main;
	}
	else
	printf("Invalid mode specified. Mode %d %s used.\n", mode, mode ? s1 : s2);
	//printf("Current mode = %d", mode);

}
void get_info(void)
{
	if (mode == 0)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%d", &range);
		printf("Enter fuel consumed in liters:");
		scanf("%d", &consume);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%d", &range);
		printf(" Enter fuel consumed in gallons:");
		scanf("%d", &consume);
	}

	
}
void show_info(void)
{
	if (mode == 0)
	printf("Fuel consumption is %d liters per 100 km.\n", (100 * consume)/range);
	else
	printf(" Fuel consumption is %d miles per gallon.\n", range/consume);
}