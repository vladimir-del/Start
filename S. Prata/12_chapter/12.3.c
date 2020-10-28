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
	int mode_rez;
	int range, consume;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		mode_rez = set_mode(mode);
		get_info(&range, &consume, mode_rez);
		show_info(range, consume, mode_rez);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");
 return 0;
 }
