//-------------------------------------------------
//Date: 28.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 3
//-------------------------------------------------

/* 
Text programmming exersice.
2. Redesign the program described in Programming Exercise 2 so that it uses only automatic
variables. Have the program offer the same user interface—that is, it should prompt the 
user to enter a mode, and so on. You’ll have to come up with a different set of function
calls, however. 
*/

#include <stdio.h>

#include "12.3.h"

int main(void)
 { 
	int mode;
	int mode_prev = 0;
	int mode_rez;
	int range, consume;
	const char *s1 = "(US)";
	const char *s2 = "(Metric)";

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		if (mode <=1)
			mode_prev = mode;
		else 
		{ 
			mode = mode_prev;
			printf("Invalid mode specified. Mode %d %s used.\n", mode, mode ? s1 : s2);
		}
		
		get_info(&range, &consume, mode);
		show_info(range, consume, mode);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");
 return 0;
 }
