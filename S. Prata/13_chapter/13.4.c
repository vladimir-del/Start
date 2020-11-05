/*-------------------------------------------------
//Date: 05.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 4
//-------------------------------------------------
/* 
Text programmming exersice.
4. Write a program that sequentially displays onscreen all the files listed in the command
line. Use argc to control a loop. 
 

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)

{
	FILE *fa;
	char ch;
	int i = 0;
	
	while( i  < argc )
	{
		if ((fa = fopen(argv[i+1], "r")) == NULL)
		{
			printf("Usage: $%s [file name1], [file name2], ...", argv[0]);
			exit(3);
		}
		
		while ((ch = getc(fa)) != EOF)
		{
			fprintf(stdout, "%c", ch);
		}
		i++;
	}
}