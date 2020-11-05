/*-------------------------------------------------
//Date: 05.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 3
//-------------------------------------------------
/* 
Text programmming exersice.
3. Write a file copy program that prompts the user to enter the name of a text file to act as
the source file and the name of an output file. The program should use the toupper()
function from ctype.h to convert all text to uppercase as it’s written to the output file.
Use standard I/O and the text mode. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char ** argv)
{
	FILE *fa, *fb;
	char ch;
	
	char source[80], target[80];
	
	printf("Enter source file name:");
	if (scanf("%s", source) != 1)
	{
		printf("Invalid source file name\n");
		exit(1);
	}
	
	printf("Enter target file name:");
	if (scanf("%s", target) != 1)
	{
		printf("Invalid target file name\n");
		exit(2);
	}
	printf("%s %s", source, target);
	
	if ((fa = fopen(source, "r")) == NULL)
	{
		printf("Cannot open file to read\n");
		exit(3);
	}
	if ((fb = fopen(target, "w")) == NULL)
	{
		printf("Cannot open file to write\n");
		exit(4);
	}
	while ((ch = getc(fa)) != EOF)
	{
		fprintf(fb, "%c", toupper(ch));
	}

	fclose(fa);
	fclose(fb);
	return 0;
}
