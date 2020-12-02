/*-------------------------------------------------
//Date: 02.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 14
//Programming exercise 1
//-------------------------------------------------
/* 
Text programmming exersice.
1. Redo Review Question 5, but make the argument the spelled-out name of the month
instead of the month number. (Don’t forget about strcmp().) Test the function in a
simple program. 
*/

#include <stdio.h>
#include <string.h>

struct month {
	char month[10];
	char abbr[4];
	int days;
	int numInYear;
};

struct month months[12] = {
		{"January", "jan", 31, 1},
		{"February", "feb", 28, 2},
		{"March", "mar", 31, 3},
		{"April", "apr", 30, 4},
		{"May", "may", 31, 5},
		{"June", "jun", 30, 6},
		{"July", "jul", 31, 7},
		{"August", "aug", 31, 8},
		{"September", "sep", 30, 9},
		{"October", "oct", 31, 10},
		{"November", "nov", 30, 11},
		{"December", "dec", 31, 12}
	};
int days(char *monthName);

int main(int argc, char **argv)
{
	char monthName[10];
	puts("Enter abbr month");
	fgets(monthName, 10, stdin);
	
	printf("%d", days(monthName));
	
	return 0;
}


int days(char *monthName)
{
	
	int index, total;
	
	for (int i = 0; i <= 12; i++)
	{
		if ((strcmp(monthName, months[i].month)) == NULL)
		{
			for (index = 0, total = 0; index < i; index ++)
			total += months[index].days;
			return(total);
		}
		
		else
		return(-1);
	}

}
