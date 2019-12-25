//-------------------------------------------------
//Date: 25.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 3
//-------------------------------------------------

#include <stdio.h>
#include "def_func.h"

void threearg(char ch, int i, int j);


void main (void)
{
	char ch; 
	int i, j;
	
	printf("Enter ch= ");
	ch = get_char();
	
	printf("Enter i= ");
	
	while ((i = get_int()) <= 0)
		printf("Enter i > 0\n: ");
	
	printf("Enter j= ");
	
	while ((j = get_int()) <= 0)
		printf("Enter j > 0\n: ");
	
	threearg(ch, i, j);
	return;	
}

void threearg(char ch, int i, int j)

{
	for (int k = 0; k < j; k++)
	{
		for (int l = 0; l < i; l++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}	
}
