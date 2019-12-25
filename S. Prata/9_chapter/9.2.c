//-------------------------------------------------
//Date: 24.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 2
//-------------------------------------------------

#include <stdio.h>
#include "def_func.h"

void chline (void);
void main (void)
{
	chline();
	return;
}

void chline(void)
{
	char ch;
	int i, j;
	
	printf("Enter ch =");
	ch = get_char();
	
	printf("Enter i = ");

	while ((i = get_int()) < 0)
		printf("Enter int > 0\n: ");
		
	printf("Enter j = ");
	
	while((j = get_int()) <= i)
		printf("Input j integer number > than i: ");
	
	for (int k = 0; k <= i; k++)
		printf("*");
	
	while(i < j)
	{
		printf("%c", ch);
		i++;
	}
}