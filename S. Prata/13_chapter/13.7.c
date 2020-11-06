/*-------------------------------------------------
//Date: 05.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 7
//-------------------------------------------------
/* 
Text programmming exersice.
7. Write a program that opens two files. You can obtain the filenames either by using
command-line arguments or by soliciting the user to enter them.
 a. Have the program print line 1 of the first file, line 1 of the second file, line 2 of the
first file, line 2 of the second file, and so on, until the last line of the longer file (in
terms of lines) is printed.
 b. Modify the program so that lines with the same line number are printed on the
same line. 
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//system("chcp 1251"); // переходим в консоли на русский язык
	system("cls");       // очищаем окно консоли
	FILE *fa, *fb;
	char ch1, ch2;
	//char *s1;
	//char *s2;	
	if (argc != 3)
	{
		printf("Usage: $%s [file name1], [file name2]", argv[0]);
		exit(3);
	}
	
	if ((fa = fopen(argv[1], "r")) == NULL)
		{
			puts("Cannot open file");
			exit(1);
		}
		
	if ((fb = fopen(argv[2], "r")) == NULL)
		{
			puts("Cannot open file");
			exit(2);
		}
	
	ch1 = getc(fa);
	ch2 = getc(fb);
	
		while((ch1 != EOF) || (ch2 != EOF))
		{
			
			while ((ch1 != EOF) && (ch1 != '\n'))
			{
				putc(ch1, stdout);
				ch1 = getc(fa);
			}
			if (ch1 != EOF)
			{
				putc('\n', stdout);
				ch1 = getc(fa);
			}
			
			
			while ((ch2 != EOF) && (ch2 != '\n'))
			{
				putc(ch2, stdout);
				ch2 = getc(fb);
			}
			
			if (ch2 != EOF)
			{
				putc('\n', stdout);
				ch2 = getc(fb);
			}
			
		}	
	return 0;
	
	
}