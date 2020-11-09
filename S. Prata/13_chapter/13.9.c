/*-------------------------------------------------
//Date: 09.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 9
//-------------------------------------------------
/* 
Text programmming exersice.
9. Modify the program in Listing 13.3so that each word is numbered according to the order
in which it was added to the list, starting with 1. Make sure that, when the program is
run a second time, new word numbering resumes where the previous numbering left off. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 41

int main(int argc, char **argv)
{
	FILE *fp, *fx;
	char words[MAX];
	int count = 1;
	char ch;
	
	if ((fx = fopen("w.txt", "r")) == NULL)
	{
		fprintf(stdout,"Can't open \"w.txt\" file.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		while ((ch = getc(fx)) != EOF)
			if (ch == '\n')
				count++;
	}
	
	if (fclose(fx) != 0)
		fprintf(stderr,"Error closing file\n");
	
	if ((fp = fopen("w.txt", "a+")) == NULL)
	{
		fprintf(stdout,"Can't open \"w.txt\" file.\n");
		exit(EXIT_FAILURE);
	}
	
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	
	while ((fscanf(stdin,"%40s", words) == 1) && (words[0] != '#'))
	{
		fprintf(fp, "%d-%s\n", count++, words);
	}
		
	
	puts("File contents:");
	rewind(fp); /* go back to beginning of file */
	
	while (fscanf(fp,"%s",words) == 1)
		puts(words);
	
	puts("Done!");
	
	if (fclose(fp) != 0)
		fprintf(stderr,"Error closing file\n");
	
	return 0;

}
