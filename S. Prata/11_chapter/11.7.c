//-------------------------------------------------
//Date: 14.08.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 7
//-------------------------------------------------

/* 
Text programmming exersice.

7. The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1 , truncating
s2 or padding it with extra null characters as necessary. The target string may not be
null-terminated if the length of s2 is n or more. The function returns s1 . Write your own
version of this function; call it mystrncpy() . Test the function in a complete program
that uses a loop to provide input values for feeding to the function.

*/

#include <stdio.h>
#include <string.h>

#define MAX 80

char *stringcpy(char *s1, char *s2, int n);
char one_char();

int main (void) 
{
    char string1[MAX*2], string2[MAX];
    
    int numberCharacters;

    printf("For emergemcy exit, press CTRL+C\n");
    printf("Please, input string s1, s2 max lenght %d characters,\n"
    "and number of characters for copy\n", MAX);
   
    do
    {
        printf("S1 = ");
        fgets(string1, MAX,stdin);
        
        printf("S2 = ");
        fgets(string2, MAX,stdin);

        printf("Number of characters for copy N = ");
        scanf("%d", &numberCharacters);

        getc(stdin);
        
        printf("String 1 + String 2 = %s\n", stringcpy(string1, string2, numberCharacters));
        printf("Press 'E' for exit or 'Enter' to continue\n");

    } while (one_char() != 'E');
    
    puts("\nEnd programm");

}
    char one_char()
{
    int i = 0;
    char str[MAX];
    fgets(str, MAX, stdin);
    return str[i];
}

char *stringcpy(char *s1, char *s2, int n)
{
    int lenghtS1 = strlen(s1);
    int lenghtS2 = strlen(s2);
    // if lenght of string 2 is less than N
    if (lenghtS2 < n)
    {
        int i = 0;

        // two part
        // First part. Coping S2 to the end of S1
        while (i != lenghtS2)
            {
                * (s1 + i + lenghtS1 - 1) = * (s2 + i);
                i++;
            } 
        //Second part. Coping '/0' to S1 after copied S2 to the end of S1.
        while (i < n)
        {
            * (s1 + i + lenghtS1 - 2) = '\0';
            i++;
        }          
        
    }

    else 
    {
        // if lenght of string 2 is more than N
        for (int i = 0; i < n; i++)
        s1[i + lenghtS1 - 1] = s2[i];
    }
    
    return s1;
}