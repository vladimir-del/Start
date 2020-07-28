//-------------------------------------------------
//Date: 28.07.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 4
//-------------------------------------------------

/* 
Text programmming exersice.

4. Design and test a function like that described in Programming Exercise 3 except that it
accepts a second parameter specifying the maximum number of characters that can be
read.

*/

#include <stdio.h>
#include <string.h>

void ReadWord(char *ArrInput, char *ArrWord, int n);

int main(void)
{
	int limit;
	printf("Input maximum number of characters");
	scanf("%d", &limit);
	getchar();
	
	char ArrayInput[limit];
	char ArrayWord[limit];
	printf("Input sentenses. Number letters limited %d symbols\n", limit);
	ReadWord(ArrayInput, ArrayWord, limit);
	printf("Result: ");
	printf("%s", ArrayWord);
	return 0;
}

void ReadWord(char *ArrInput, char *ArrWord, int n)
{
	int i = 0;
	int l = 0;
	int k = 0; 
	while(i < n && k < 1)
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