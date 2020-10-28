//-------------------------------------------------
//Date: 28.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 2
//-------------------------------------------------

/* 
Text programmming exersice.
2. If the user enters an incorrect mode, the program comments on that and uses the most
recent mode. Supply a pe12-2a.h header file and a pe12-2a.c source code file to make
this work. The source code file should define three file-scope, internal-linkage variables.
One represents the mode, one represents the distance, and one represents the fuel
consumed. The get_info() function prompts for data according to the mode setting
and stores the responses in the file-scope variables. The show_info() function calculates
and displays the fuel consumption based on the mode setting. You can assume the user
responds with numeric input. 
*/

#include <stdio.h>
#include "12.2.h"

int main(void)
 { 
	int mode;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");
 return 0;
 }
 