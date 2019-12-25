//-------------------------------------------------
//Date: 25.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 9
// Programming exercise 6
//-------------------------------------------------

#include <stdio.h>
#include <ctype.h>
#include "def_func.h"

void is_symbol(char ch);
void num_symbol(int ch);

void main(void)

{
	char ch;
	
	while ((ch = getchar()) != '*')		//* == EOF
	{
		if (ch == '\n')
		continue;
		else	
		is_symbol(ch);	
	}
}

void is_symbol(char ch)
{
	if(isalpha(ch))
	{
		printf("%c - is symbol\n", ch);
		num_symbol(ch);
	} 
	else 
		printf("%c - is not symbol\n", ch);
}

void num_symbol(int ch)
{
	if (islower(ch))
		printf("'%c' - this symbol have number %d in alfabet\n", ch, (ch - 97));
	else
		printf("'%c' - this symbol have number %d in alfabet\n", ch, (ch - 65));
}