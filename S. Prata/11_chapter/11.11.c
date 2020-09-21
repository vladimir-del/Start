//-------------------------------------------------
//Date: 26.08.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 11
//-------------------------------------------------

/* 
Text programmming exersice.

Write a program that reads in up to 10 strings or to EOF , whichever comes first. Have it
offer the user a menu with five choices: print the original list of strings, print the 
strings in ASCII collating sequence, print the strings in order of increasing length, 
print the strings in order of the length of the first word in the string, and quit. Have 
the menu recycle until the user enters the quit request. The program, of course, should 
actually perform the promised tasks.
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

#define NUM_STR 10


void func1(void);
void func2(void);
void func3(void);
void func4(void);
void func5(void);

int main(int argc, char * argv[])
{
	char const *quit = "quit\n";
	int MenuSelect;
	
	printf("If you want to exit. Write quit\n");
	
	char string[NUM_STR][LINE_MAX];

		for (int i = 0; i < NUM_STR ; i++)
		{
			printf("String[%d] = ", i);
			fgets(string[i], LINE_MAX, stdin);
						
			//check for exit
			if (strcmp(string[i], quit) == 0)
			{
				printf(" string[%d] = %s", i, string[i][LINE_MAX]);
				break;
			}
		}
		
	
		



	while (scanf("%d", &MenuSelect)!=5)
	{
		printf("\n\nPlease select the appropriate item:\n\n");
		printf("(1) print the original list of strings\n");
		printf("(2) print the strings in ASCII collating sequence\n");
		printf("(3) print the strings in order of increasing length\n");
		printf("(4) print the strings in order of the length of the first word in the string\n");
		printf("(5) quit\n");
		
		printf("%d\n", MenuSelect);
		
		switch (MenuSelect)
		{
		case 1:
			func1();
			break;
		case 2:
			func2();
			break;
			
		case 3:
			func3();
			break;
			
		case 4:
			func4();
			break;
			
		case 5:
			
			break;
				
		default:
			printf("Wrong input\n");
			//scanf("%d", &MenuSelect);
			break;
		}

	}

	
}

void func1(void)
{
	printf("func 1\n");
}

void func2(void)
{
	printf("func 2\n");
}

void func3(void)
{
	printf("func 3\n");
}

void func4(void)
{
	printf("func 4\n");
}

void func5(void)
{
	printf("func 5\n");
}
