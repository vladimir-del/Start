//-------------------------------------------------
//Date: 28.07.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 3
//-------------------------------------------------

/* 
Text programmming exersice.

Design and test a function that reads the first word from a line of input into an array and
discards the rest of the line. It should skip over leading whitespace. Define a word as a
sequence of characters with no blanks, tabs, or newlines in it. 

*/

#include <stdio.h>
#include <string.h>

#define LIM 20

void ReadWord(char *ArrInput, char *ArrWord, int n);

int main(void)
{
	char ArrayInput[LIM];
	char ArrayWord[LIM];
	puts("Input sentenses. Number letters limited 20 symbols\n");
	ReadWord(ArrayInput, ArrayWord, LIM);
	puts("Result: ");
	printf("%s", ArrayWord);
	return 0;
}

void ReadWord(char *ArrInput, char *ArrWord, int n)
{
	int i = 0;
	int l = 0;
	int k = 0; 
	while(i < n - 1 && k < 1)
	{
		ArrInput[i] = getc(stdin);
		if (ArrInput[i] == '\n' || ArrInput[i] == '\t' || ArrInput[i] == ' ')
		{
			i++;
			k++;
			continue;
		}
		ArrWord[l] = ArrInput[i];
		
		i++;
		l++;
	}
	ArrWord[l] = '\0';
}