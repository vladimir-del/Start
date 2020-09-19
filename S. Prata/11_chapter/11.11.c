//-------------------------------------------------
//Date: 26.08.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 11
//-------------------------------------------------

/* 
Text programmming exersice.

Write a program that reads in up to 10 strings or to EOF , whichever comes first. Have it
offer the user a menu with five choices: print the original list of strings, print the 
strings in ASCII collating sequence, print the strings in order of increasing length, 
print the strings in order of the length of the first word in the string, and quit. Have 
the menu recycle until the user enters the quit request. The program, of course, should 
actually perform the promised tasks.
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

#define NUM_STR 10
#define MAX_LENGHT 80

int main (void)
{
    char str1[LINE_MAX];
    //int i = 1;
    //int c;

    /*  do
    {
         
        printf("S%d = ", i);
        fgets(str1, LINE_MAX, stdin);
        printf("string after function *delete_space = %s", str1);
        i++;

    }
    */
     while (fgets(str1, LINE_MAX, stdin) != NULL);
        printf("End program. You enter an empty string\n");
        printf("%s", str1);
}