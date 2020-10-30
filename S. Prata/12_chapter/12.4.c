//-------------------------------------------------
//Date: 30.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 4
//-------------------------------------------------

/* 
Text programmming exersice.
4. Write and test in a loop a function that returns the number of times it has been called. 
*/

#include <stdio.h>

static int num;
void func(void);
int main(void)
{
	
	int i;
	puts("Enter call a function");
	scanf("%d", &i);
	for(int l = 0; l < i; l++)
	{
		func();
	}
	
	printf("Number calls a function = %d", num);
	
	return 0;
}

void func(void)
{
	num ++;
}