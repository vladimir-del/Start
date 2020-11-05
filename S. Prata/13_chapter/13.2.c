/*-------------------------------------------------
//Date: 04.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 2
//-------------------------------------------------
/* 
Text programmming exersice.
2. Write a file-copy program that takes the original filename and the copy file from the
command line. Use standard I/O and the binary mode, if possible.
*/

#include <stdio.h>
#include <stdlib.h>

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
		fprintf(fb, "%c", ch);

	fclose(fa);
	fclose(fb);
	return 0;

}
