/*-------------------------------------------------
//Date: 03.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 14
//Programming exercise 2
//-------------------------------------------------
/* 
Text programmming exersice.
2. Write a program that prompts the user to enter the day, month, and year. The month
can be a month number, a month name, or a month abbreviation. The program then
should return the total number of days in the year up through the given day. (Do take
leap years into account.) 
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct month {
	char month[10];
	char abbr[4];
	int days;
	char numInYear[2];
};

struct month months[12] = {
		{"January", "jan", 31, "1"},
		{"February", "feb", 28, "2"},
		{"March", "mar", 31, "3"},
		{"April", "apr", 30, "4"},
		{"May", "may", 31, "5"},
		{"June", "jun", 30, "6"},
		{"July", "jul", 31, "7"},
		{"August", "aug", 31, "8"},
		{"September", "sep", 30, "9"},
		{"October", "oct", 31, "10"},
		{"November", "nov", 30, "11"},
		{"December", "dec", 31, "12"}
	};
int days(int day, char *monthName, int year);



bool LeapYear(int year);

int main(int argc, char **argv)
{
	int temp;
	int day;
	int year;
	char monthName[10];

	printf("Enter day = ");
	scanf("%d", &day);

	printf("Enter month number, a month name, or a month abbreviation = ");
	scanf("%s", monthName);
	
	while (getchar() != '\n') //Clear input from \n
			continue;
	
	printf("Enter year = ");
	scanf("%d", &year);
	
	printf("Number days = %d \n", days(day, monthName, year));
	
	return 0;
}


int days(int day, char *monthName, int year)
{
	
	int index, total;
	if (LeapYear(year))
	months[1].days = 29;
	
	for (int i = 0; i <= 12; i++)
	{
		if ( (strcmp(monthName, months[i].month) == 0)
			|| (strcmp(monthName, months[i].abbr) == 0)
			|| (strcmp(monthName, months[i].numInYear) == 0))
		{
			for (index = 0, total = 0; index < i; index ++)
			total += months[index].days;
			return(total + day);
		}
	}
	return(-1);
}

bool LeapYear(int year) //definituon leap year
{
	if (year % 4 != 0)
		return false;
	else 
	{
		if (year % 100 == 0 && year % 400 != 0)
			return false;
		else 
			return true;
	}
}
