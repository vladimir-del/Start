/*-------------------------------------------------
//Date: 10.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 13
//-------------------------------------------------
/* 
Text programmming exersice.
12. Do Programming Exercise 12, but use variable-length arrays (VLAs) instead of standard
arrays. 
0 = ' '; 1 = '.'; 2 = '''; 3 = ':'; 4 = '~';
5 = '*'; 6 = '='; 7 = '@'; 8 = '%'; 9 = '#';
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW 20
#define COL 30


int main(int argc, char **argv)
{
	FILE *fa;
	int array[ROW][COL];
	char ch;
	char s[ROW][COL + 1] = {0};
	const char symbols[10] = {' ', '.', '`', ':', '~', '*', '=', '@' , '%', '#'};
	
	
	//open file
	if ((fa = fopen("s.txt", "r")) == NULL)
	{
		fprintf(stdout,"Can't open \"%s\" file.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	//save char to int
		 for (int i = 0; i < ROW; i++)
		 {
			 for (int j = 0; j < COL; j++)
			 {
				ch = getc(fa);
				while (ch == ' ' || ch == '\n')
				{
					ch = getc(fa);
					continue;
				}	
				*(*(array + i) + j) = ch & 0x0F;
			 }
		 }
	
	//change int to symbol and creating strings
	for (int i = 0; i < ROW; i++)
		 {
			 for (int j = 0; j < COL; j++)
				*(*(s + i) + j) = *(symbols + *(*(array + i) + j));
		 }
	//print strings
	for (int i = 0; i < ROW; i++)
	{
		printf("%s\n", s[i]);
	}
	
	return 0;
}