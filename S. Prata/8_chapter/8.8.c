//-------------------------------------------------
//Date: 18.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 8
// Programming exercise 8
//-------------------------------------------------


#include <stdio.h>

char get_choice(void);
char get_firts(void);
float get_float(void);
float addition(void);
float subtraction(void);
float multiplication(void);
float division(void);

int main(void)

{
	char choice;

	while ((choice = get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a': 
			printf("Select a\n");
			addition();
			break;
			
			case 's':
			printf("Select s\n");
			subtraction();
			break;
			
			case 'm':
			printf("Select m\n");
			multiplication();
			break;
			
			case 'd':
			printf("Select d\n");
			division();
			break;
		}
		
	}
	
	
	printf("End programm");
	return 0;
}

char get_choice(void)
{
	int ch;
	printf("Select menu item:\n");
	printf("a: addition, 		s: subtraction\n");
	printf("m: multiplication, 	d: division\n");
	printf("q: quit\n");
	ch = get_firts();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 's' && ch != 'd' && ch != 'q')
	{
		printf("Select a, s, m, d or q");
		ch = get_firts();
	}
	return ch;
}

char get_firts(void)
{
	char ch;
	ch = getchar();
	while(getchar() != '\n')
		continue;
	return ch;
}

float get_float(void)
{
	char ch;
	float num;
	while(scanf("%f", &num) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf("\nThis number not float\n");
		printf("Input 25, 78 or 1.32: ");
	}
	return num;
}

float addition(void)
{
	printf("Input num1 = ");
	float num1 = get_float();
	printf("Input num2 = ");
	float num2 = get_float();
	printf("\n");
	printf("Num1 + num2 = %.2f\n", num1 + num2);
	printf("\n\n\n\n\n");
}

float subtraction(void)
{
	printf("Input num1 = ");
	float num1 = get_float();
	printf("Input num2 = ");
	float num2 = get_float();
	printf("\n");
	printf("Num1 - num2 = %.2f\n", num1 - num2);
	printf("\n\n\n\n\n");
}

float multiplication(void)
{
	printf("Input num1 = ");
	float num1 = get_float();
	printf("Input num2 = ");
	float num2 = get_float();
	printf("\n");
	printf("Num1 * num2 = %.2f\n", num1 * num2);
	printf("\n\n\n\n\n");
}

float division(void)
{
	printf("Input num1 = ");
	float num1 = get_float();
	printf("Input num2 = ");
	float num2 = get_float();
	printf("\n");
	printf("Num1 / num2 = %.2f\n", num1 / num2);
	printf("\n\n\n\n\n");
}

