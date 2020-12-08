/*-------------------------------------------------
//Date: 06.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 14
//Programming exercise 4.a
//-------------------------------------------------
/* 
Text programmming exersice.
4. Write a program that creates a structure template with two members according to the
following criteria:

a. The first member is a social security number. The second member is a structure
with three members. Its first member contains a first name, its second member
contains a middle name, and its final member contains a last name. Create and
initialize an array of five such structures. Have the program print the data in this
format:
Dribble, Flossie M. –– 302039823

Only the initial letter of the middle name is printed, and a period is added. Neither the
initial (of course) nor the period should be printed if the middle name member is empty.
Write a function to do the printing; pass the structure array to the function.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXCH 40

struct people {	
	char FirstName[MAXCH];
	char MiddlName[MAXCH];
	char LastName[MAXCH];
};

struct data{
		int social;
		struct people work;
};

void PrintStruct(const struct data);

int main(void)
{
	
	struct data work[5] = 
	{
		302039, {"Vladimir", "viktorovich", "draga"},
		
		302039,
		{"denis", "egtrs", "fuk"},
		
		302039,
		{"orel", "kolots", "duh"},
		
		302039,
		{"data", "pekurich", "ner"},
		
		302039,
		{"petr", "", "got"},

	};
	for (int i = 0; i < 5; i++)
	{
		PrintStruct(work[i]);
	}
	
	
	return 0;
}


void PrintStruct(const struct data s)
{
	if (s.work.MiddlName[0] == '\0')
		printf("%s, %s -- %d\n", s.work.FirstName, s.work.LastName, s.social);
	printf("%s, %s %c. -- %d\n", s.work.FirstName, s.work.LastName, toupper(s.work.MiddlName[0]), s.social);
}