//-------------------------------------------------
//Date: 05.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 1
//-------------------------------------------------


#include <stdio.h>
#include <ctype.h>

int main(void)
{


char ch;
int spce = 0;
int entr = 0;
int all = 0;

printf("Enter sequence symbol or '#' for exit \n");
while ((ch = getchar()) != '#')
	
	{
		if (ch == ' ')
			spce++;
		else if (ch == '\n')
			entr++;
		else
			all++;
		
	}
	
	printf("%d space, %d \n and %d all symbol", spce, entr, all);
	
	return 0;

}