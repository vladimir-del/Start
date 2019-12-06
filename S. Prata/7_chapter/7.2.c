//-------------------------------------------------
//Date: 05.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 2
//-------------------------------------------------


#include <stdio.h>
#include <ctype.h>

int main(void)
{


char ch;
int i = 0;

printf("Enter any symbol or '#' for exit \n");
while ((ch = getchar()) != '#')
	
	{
		printf("%c - %3d ", ch, ch);
		ch = getchar();
		if (i == 6)
		printf("\n");
		i++;
		
	}
	
	
	return 0;

}