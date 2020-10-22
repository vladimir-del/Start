//-------------------------------------------------
//Date: 21.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 16
//-------------------------------------------------

/* 
Text programmming exersice.
16. Write a program that reads input until end-of-file and echoes it to the display. Have the
program recognize and implement the following command-line arguments:
-p Print input as is
-u Map input to all uppercase
-l Map input to all lowercase
Also, if there are no command-line arguments, let the program behave as if the –p
argument had been used.
*/

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

#define LINE_MAX 80

char * toup(char *s);
char * tolow(char *s);


int main(int argc, char *argv[])
{
    char s[LINE_MAX];
    fgets(s, LINE_MAX, stdin);
    //printf("%s", argv[1] + 1);
	
	//char c = 'g';
	//printf("%c", toupper(c));
	//printf("%s", *argv[1]);

    switch (*(argv[1] + 1))
    {
    case 'p':
        printf("Argv -p: Print input as is: %s", s);
        break;
    case 'u':
        printf("Argv -u: Map input to all uppercase:");
		toup(s);
        break;
    case 'l':
        printf("Argv -l: Map input to all lowercase:");
		tolow(s);
        break;
    default:
    puts("Error"); return 0;
    }
}

char * toup(char *s)
{
	int i = 0;
	while (*(s + i) != '\n')
	{
		printf("%c", toupper(*(s + i)));
		i++;
	}
	
	return s;
}

char * tolow(char *s)
{
	int i = 0;
	while (*(s + i) != '\n')
	{
		printf("%c", tolower(*(s + i)));
		i++;
	}
	
	return s;
}
