//-------------------------------------------------
//Date: 29.05.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 1
//-------------------------------------------------

/* 
Text programmming exersice.

1. Design and test a function that fetches the next n characters from input (including
blanks, tabs, and newlines), storing the results in an array whose address is passed as an
argument.

*/

#include <stdio.h>
#include <string.h>

#define LIM 10

void func(char *str, int n);

int main(void)
{
	char TargetArray[LIM];
	printf("Input %d symbols\n", LIM - 1);
	
	func(TargetArray, LIM);
	
	printf("%s", TargetArray);
	return 0;
}

void func(char *str, int n)
{
	int i = 0;
	while (i < n-1)
	{
		str[i] = getchar();
		if (str[i] == '\n')
			str[i] = ' ';
		
		i++;
	}
	str[i] = '\0';
}