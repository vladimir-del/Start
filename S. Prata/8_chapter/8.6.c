//-------------------------------------------------
//Date: 18.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 8
//Programming exercise 6
//-------------------------------------------------


#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main (void)

{
	printf("First symbol = %c", get_first());
}

char get_first(void)
{
	int ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (isgraph(ch))
		return ch;
		else 
		ch = getchar();
	}
}