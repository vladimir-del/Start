/*-------------------------------------------------
//Date: 09.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 11
//-------------------------------------------------
/* 
Text programmming exersice.
11. Write a program that takes two command-line arguments. The first is a string; the
second is the name of a file. The program should then search the file, printing all lines
containing the string. Because this task is line oriented rather than character oriented,
use fgets() instead of getc(). Use the standard C library function strstr() (briefly
described in exercise 7 of Chapter 11 ) to search each line for the string. Assume no lines
are longer than 255 characters. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 255

int main(int argc, char **argv)
{
	char str[MAX];
	FILE *fa;
	if (argc != 3)
	{
		printf("Usage: %s String FileName");
		exit(EXIT_FAILURE);
	}
	
	if ((fa = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stdout,"Can't open \"%s\" file.\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	
	while (fgets(str, MAX, fa) != 0)
	{
		if ((strstr(str, argv[1]) != NULL))
			printf("%s", str);
	}	
	
	if (fclose(fa) != 0)
		fprintf(stderr,"Error closing file\n");
	
	return 0;
}