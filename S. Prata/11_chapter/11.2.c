//-------------------------------------------------
//Date: 27.07.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 2
//-------------------------------------------------

/* 
Text programmming exersice.

2. Modify and test the function in exercise 1 so that it stops after n characters or after the
first blank, tab, or newline, whichever comes first. (Don’t just use scanf() .)

*/


#include <stdio.h>
#include <string.h>

#define LIM 10

void mod_func(char *str, int n);

int main(void)
{
	char TargetArray[LIM];
	printf("Input %d symbols\n", LIM - 1);
	
	mod_func(TargetArray, LIM);
	
	printf("%s\n", TargetArray);
	return 0;
}

void mod_func(char *str, int n)
{
	int i = 0;
	while (i < n - 1)
	{
		str[i] = fgetc(stdin);
		if (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			break;
		
		i++;
	}
	str[i] = '\0';
}