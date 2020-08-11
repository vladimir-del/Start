//-------------------------------------------------
//Date: 29.07.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 5
//-------------------------------------------------

/* 
Text programmming exersice.

5. Design and test a function that searches the string specified by the first function
parameter for the first occurrence of a character specified by the second function
parameter. Have the function return a pointer to the character if successful, and a null
if the character is not found in the string. (This duplicates the way that the library
strchr() function works.) Test the function in a complete program that uses a loop to
provide input values for feeding to the function.

*/

#include <stdio.h>
#include <string.h>

#define MAX 80

char *SearchFunc(char * str, char C);

int main(void)
{

	char str[MAX], Symbol;

    printf("Enter string for serach MAX = %d symbols\n", MAX);
    fgets(str, MAX, stdin);
    printf("Enter a character to search: ");
    Symbol = getchar();


    printf("The Adress where the pointer refers = %p\n", SearchFunc(str, Symbol));
    printf("Value of pointer = %s\n", SearchFunc(str, Symbol));

	return 0;
}

char *SearchFunc(char * str, char C)
{
    int  i = 0;
    char *empty = "NULL";
    while (*(str + i) != '\0')
    {
        if (*(str + i) == C)
        return str + i;
        else
        i++;
    }
    return empty;
}