/*-------------------------------------------------
//Date: 09.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 12
//-------------------------------------------------
/* 
Text programmming exersice.
12. Create a text file consisting of 20 rows of 30 integers. The integers should be in the range
0–9 and be separated by spaces. The file is a digital representation of a picture, with
the values 0 through 9 representing increasing levels of darkness. Write a program that
reads the contents of the file into a 20-by-30 array of ints. In a crude approach toward
converting this digital representation to a picture, have the program use the values
in this array to initialize a 20-by-31 array of chars, with a 0 value corresponding to a
space character, a 1 value to the period character, and so on, with each larger number
represented by a character that occupies more space. For example, you might use # to
represent 9. The last character (the 31st) in each row should be a null character, making
it an array of 20 strings. Have the program display the resulting picture (that is, print the
strings) and also store the result in a text file.
0 = ' '; 1 = '.'; 2 = '''; 3 = ':'; 4 = '~';
5 = '*'; 6 = '='; 7 = '@'; 8 = '%'; 9 = '#';
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
	FILE *fa;
	int array[20][30];
	char ch;
	char s[20][31] = {0};
	const char symbols[10] = {' ', '.', '`', ':', '~', '*', '=', '@' , '%', '#'};
	
	
	//open file
	if ((fa = fopen("s.txt", "r")) == NULL)
	{
		fprintf(stdout,"Can't open \"%s\" file.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	//save char to int
		 for (int i = 0; i < 20; i++)
		 {
			 for (int j = 0; j < 30; j++)
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
	for (int i = 0; i < 20; i++)
		 {
			 for (int j = 0; j < 30; j++)
				*(*(s + i) + j) = *(symbols + *(*(array + i) + j));
		 }
	
	//print strings
	for (int i = 0; i < 20; i++)
	{
		printf("%s\n", s[i]);
	}
	
	return 0;
}
