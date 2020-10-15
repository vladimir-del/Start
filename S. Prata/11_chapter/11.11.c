//-------------------------------------------------
//Date: 28.07.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 4
//-------------------------------------------------

/* 
Text programmming exersice.

11. Write a program that reads in up to 10 strings or to EOF, whichever comes first. Have it
offer the user a menu with five choices: print the original list of strings, print the strings
in ASCII collating sequence, print the strings in order of increasing length, print the
strings in order of the length of the first word in the string, and quit. Have the menu
recycle until the user enters the quit request. The program, of course, should actually
perform the promised tasks. 

I change EOF to const string "Quit"
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

#define NUM_STR 4
//#define LINE_MAX 200

void OriginList(char (*Array)[LINE_MAX], int num_str);
void SortAscii(char (*Array)[LINE_MAX], int num_str);
void SortLength(char (*Array)[LINE_MAX], int num_str);
void func4(void);
void func5(void);
int get_int(void);

int main(int argc, char * argv[])
{
	char const quit[] = "quit\n";
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
				printf(" string[%d] = %s", i, string[i]);
				break;
			}
		}
		
	for (int i = 0; i < NUM_STR; i++)
	{
		printf("%s", string[i]);
	}
		
	do 
	{
		printf("\n\n\n**|-------------------------------------|**");
		printf("\n\nPlease select the appropriate item:\n\n");
		printf("**|-------------------------------------|**\n");
		printf("(1) print the original list of strings\n");
		printf("(2) print the strings in ASCII collating sequence\n");
		printf("(3) print the strings in order of increasing length\n");
		printf("(4) print the strings in order of the length of the first word in the string\n");
		printf("(5) quit\n\n");
		
		
		printf("Your choice = ");
		MenuSelect = get_int();
		
		switch (MenuSelect)
		{
		case 1:
			
			OriginList(string, NUM_STR);
			printf("****End function****");
			break;
		case 2:
			
			SortAscii(string, NUM_STR);
			printf("****End function****");
			break;
			
		case 3:
			
			SortLength(string, NUM_STR);
			printf("****End function****");
			break;
			
		case 4:
			
			func4();
			printf("****End function****");
			break;
		}
	
	}
	
	while(MenuSelect != 5);
		
	return 0;
}

//-------------------------------------------------------------

void OriginList(char (*Array)[LINE_MAX], int num_str)
{
	printf("\n\n**|-------------------------------------|**");
	printf("\nResult function_1:\n");
	printf("**|-------------------------------------|**\n");
	
	for (int i = 0; i < num_str; i++)
	{
		printf("string[%d] = %s", i, *(Array + i));
	}
}

//-------------------------------------------------------------

void SortAscii(char (*Array)[LINE_MAX], int num_str)
{

	printf("\n\n**|-------------------------------------|**");
	printf("\nResult function_2:\n");
	printf("**|-------------------------------------|**\n");
	
	for (int k = 0; k < num_str; k++) // iteration string
	{

	//print string in asci format

	printf("Origin string[%d] = %s", k, *(Array + k));
	
	// Bubble sort
	// "-2" remove symbol '\0' and '\n'
	
	for (int i = 0; i < (strlen(*(Array + k))) - 2; i++) 
	{
		for (int j = 0; j < (strlen(*(Array + k))) - 2; j++)
		{
			if ( *(*(Array + k) + j) > *(*(Array + k) + j + 1))
			{
				char temp = *(*(Array + k) + j);
				*(*(Array + k) + j) = *(*(Array + k) + j + 1);
				*(*(Array + k) + j + 1) = temp;
			}
		}
	}

	printf("string[%d] after bubble sorting = ",k);

	//print after sorting
	for (int i = 0; i < (strlen(*(Array + k))) - 1; i++)
	{
		printf("%c", *(*(Array + k) + i));
	}
	printf("\n\n");
	}
	
}

//-------------------------------------------------------------

void SortLength(char (*Array)[LINE_MAX], int num_str)
{
	
		//нужно применить такойже метод пузрьковой сортировки как в SortAscii
		//int temp = strlen(*(Array + i));
		//char TmpArr[num_str];
		//TmpArr[i] = temp;                                                                                                                                                                               LLLLJHLL[UUYUUPPIP[UIPIPUIIPUIPPUI[PUPUPPUIIPOUPUPUPLLLYK''';J,J.HJ,U;L;LYLL;LL;UL;;ULUPPUYPUYYLLU;LLUYYLJHLULLLLLLL]U]J'J'JH'KJ'J'K/'K'/'K
		
		for (int i = 0; i < num_str; i++)
			{
				for (int k = 0; k < num_str; k++)
					{
						if (strlen( *(Array + k)) > strlen( *(Array + k + 1)) )
							{
								char temp[LINE_MAX] ;
								strcpy(temp, *(Array + k));
								strcpy(*(Array + k), *(Array + k + 1));
								strcpy(*(Array + k + 1), temp);

							}
					}
			}
	for (int i = 0; i < num_str; i++)
	{
		printf("string[%d] = %s", i, *(Array + i));
	}
						
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