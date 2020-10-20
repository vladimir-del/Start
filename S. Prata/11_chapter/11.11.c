//-------------------------------------------------
//Date: 28.07.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 11
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

#define NUM_STR 4  // number of strings
//#define LINE_MAX 200 // if LINE_MAX undefined

void OriginList(int num_str, char (*Array)[LINE_MAX]);
void SortAscii(int num_str, char (*Array)[LINE_MAX]);
void SortLength(int num_str, char (*Array)[LINE_MAX]);
void SortFirstWord(int num_str, char (*Array)[LINE_MAX]);

int main(int argc, char * argv[])
{
	const char quit[] = "quit\n";
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
				puts("Quit programm");
				return 0;
			}
		}
		
	do 
	{
		puts("\n**|-------------------------------------|**\n");
		puts("Please select the appropriate item:");
		puts("\n**|-------------------------------------|**\n");
		puts("(1) print the original list of strings");
		puts("(2) print the strings in ASCII collating sequence");
		puts("(3) print the strings in order of increasing length");
		puts("(4) print the strings in order of the length of the first word in the string");
		puts("(5) quit");
		
		puts("Your choice = ");
		MenuSelect = getchar();
		
		while (getchar() != '\n') //deleted '\n'
            continue;
		
		switch (MenuSelect)
		{
		case '1': OriginList(NUM_STR, string); 		break;
		case '2': SortAscii(NUM_STR, string); 		break;
		case '3': SortLength(NUM_STR, string); 		break;
		case '4': SortFirstWord(NUM_STR, string); 	break;
		case '5': puts("Bye!"); 					return 0;
        default: puts("Error!"); 					return 0;
		}
	
	}
	while(MenuSelect != 5);	
	return 0;
}

//-------------------------------------------------------------

void OriginList(int num_str, char (*Array)[LINE_MAX])
{
	puts("\n**|-------------------------------------|**");
	puts("Result function_1:");
	puts("**|-------------------------------------|**\n");
	
	for (int i = 0; i < num_str; i++)
	{
		printf("string[%d] = %s", i, *(Array + i));
	}
}

//-------------------------------------------------------------

void SortAscii(int num_str, char (*Array)[LINE_MAX])
{

	puts("**|-------------------------------------|**");
	puts("Result function_2:\n");
	puts("**|-------------------------------------|**");

	for (int k = 0; k < num_str; k++) // iteration string
	{
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
	printf("\n");

	}
	
}

//-------------------------------------------------------------

void SortLength(int num_str, char (*Array)[LINE_MAX])
{
	puts("**|-------------------------------------|**");
	puts("Result function_3:\n");
	puts("**|-------------------------------------|**");
	char temp[LINE_MAX];
		for (int i = 0; i < num_str; i++)
			{
				for (int k = i + 1; k < num_str; k++)
					{
						if (strlen(*(Array + i)) > strlen(*(Array + k)))
							{

								strcpy(temp, *(Array + i));
								strcpy(*(Array + i), *(Array + k));
								strcpy(*(Array + k), temp);
							}
					}
			}
	
	for (int i = 0; i < num_str; i++)
		printf("string[%d] = %s", i, *(Array + i));
	
	}

void SortFirstWord(int num_str, char (*Array)[LINE_MAX])
{
	puts("**|-------------------------------------|**");
	puts("Result function_4:\n");
	puts("**|-------------------------------------|**");
	
	//define the first word in the string
	//the word sent to new array
	char temp[NUM_STR][LINE_MAX];
		for (int i = 0; i < NUM_STR; i++)
		{
			for (int k = 0; k < strlen(* (Array + i)); k++)
			{
				
				if (*(*(Array + i) + k) == ' ' || *(*(Array + i) + k) == '\n')
				{
				strncpy(*(temp + i), *(Array + i), k);
				break;
				}
			}
		}

	//new array sorting by bubble. 

	for (int i = 0; i < num_str; i++)
		{
			for (int k = 0; k < num_str; k++)
				{
					if (strlen( *(temp + k)) > strlen( *(temp + k + 1)) )
						{
							char temp1[LINE_MAX] ;
							strcpy(temp1, *(temp + k));
							strcpy(*(temp + k), *(temp + k + 1));
							strcpy(*(temp + k + 1), temp1);
						}
				}
		}
	//print array after sorting
	for (int i = 0; i < num_str; i++)
		printf("string[%d] = %s\n", i, *(temp + i));
}