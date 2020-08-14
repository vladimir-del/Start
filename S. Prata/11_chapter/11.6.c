//-------------------------------------------------
//Date: 14.08.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 6
//-------------------------------------------------

/* 
Text programmming exersice.

6. Write a function called is_within() that takes a character and a string pointer as its two
function parameters. Have the function return a nonzero value (true) if the character is
in the string and zero (false) otherwise. Test the function in a complete program that uses
a loop to provide input values for feeding to the function.

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 80

bool is_within(char Character, char *str);
char one_char();

int main (void) 
{
    char string[MAX], symbol;
    bool temp;
    
    printf("For emergemcy exit, press CTRL+C\n");
    printf("Please, input string max lenght %d characters"
    "and one search symbol\n", MAX);
   
    do
    {
        printf("String = ");
        fgets(string, MAX,stdin);
        
        printf("Symbol = ");
        symbol = one_char();

        temp = is_within(symbol, string);
        
        printf("\nFunction Is_within return = %s\n\n", temp ? "TRUE" : "FALSE");
        
        printf("Press 'E' for exit or 'Enter' to continue\n");

    } while (one_char() != 'E');
    
    puts("\nEnd programm");

    
}

bool is_within(char Character, char *str)
{
    int i = 0;
    while (* (str + i) != '\0')
    {
        if (* (str + i) == Character)
        return true;
        i++;
    }
    return false;

}

char one_char()
{
    int i = 0;
    char str[MAX];
    fgets(str, MAX, stdin);
    return str[i];
}