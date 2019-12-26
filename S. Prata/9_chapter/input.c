//-------------------------------------------------
//Date: 25.12.2019
//Autor: Vlaimir Draga
//S. Prata. 
//Check input function 
//-------------------------------------------------

#include <stdio.h>


//This function return a singl integer of type INT
int get_int(void)
{
	char ch;
	int input;
	
	while (scanf("%d", &input) != 1)
	{
		while(ch = getchar() != '\n')
		{
			putchar(ch);
			printf("Enter nteger number like as 2, 6 or 56: \n");
		}
	}
	
	return input;
}

//This function return a singl integer of type INT
double get_double(void)
{
	char ch;
	double input;
	
	while (scanf("%lf", &input) != 1)
	{
		while(ch = getchar() != '\n')
		{
			putchar(ch);
			printf("Enter nteger number like as 2.0, 6 or 56.8: \n");
		}
	}
	
	return input;
}


//-------------------------------------------------------
//This function return a first symbol of type CHAR.
char get_firts(void)
{
	char ch;
	ch = getchar();
	while(getchar() != '\n')
		continue;
	return ch;
}


//-------------------------------------------------------
//This function return a singl symbol of type CHAR.
char get_char(void)
{
	int ch;
	ch = get_firts();
	while ((ch < 32) || (ch > 126))
	{
		printf("enter norm char: \nch = ");
		ch = get_firts();
	}
	return ch;
}