/*-------------------------------------------------
//Date: 09.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 9
//-------------------------------------------------
/* 
Text programmming exersice.
9. Write a program that opens a text file whose name is obtained interactively. Set up a
loop that asks the user to enter a file position. The program then should print the part of
the file starting at that position and proceed to the next newline character. Let negative
or nonnumeric input terminate the user-input loop. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
	FILE *fa;
	char name[41];
	char ch;
	int position;
	printf("Enter file name:");
	scanf("%s", name);
	if ((fa = fopen(name, "r")) == NULL)
	{
		fprintf(stdout,"Can't open \"%s\" file.\n", name);
		exit(EXIT_FAILURE);
	}
	printf("Enter position:");
	while (scanf("%d", &position) == 1)
	{
		
		if (position < 0)
		{
			printf("Incorrect value");
			exit(1);
		}
		fseek(fa, position, SEEK_SET);
		printf("print the string from position %d: ", position);
		while ((ch = getc(fa)) != '\n')
			fprintf(stdout, "%c", ch);
		printf("\nEnter position:");
	}
	
	fclose(fa);
	
	return 0;	
	
}