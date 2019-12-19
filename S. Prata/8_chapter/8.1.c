//-------------------------------------------------
//Date: 13.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 8
//Programming exercise 1
//-------------------------------------------------


#include <stdio.h>

int main(void)

{
int ch;

int i = 0;

while ((ch = getchar()) != '^')
i++;

printf("%d", i);
	return 0;
}