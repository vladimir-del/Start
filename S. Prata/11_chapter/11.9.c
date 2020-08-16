//-------------------------------------------------
//Date: 15.08.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 9
//-------------------------------------------------

/* 
Text programmming exersice.

9. Write a function that replaces the contents of a string with the string reversed. Test the
function in a complete program that uses a loop to provide input values for feeding to
the function.

*/

#include <stdio.h>
#include <string.h>

#define MAX 80

char *repl_str(char *s1);
char one_char();

int main (void) 
{
    char string1[MAX];

    printf("For emergemcy exit, press CTRL+C\n");
    printf("Please, input string s1, max %d characters\n", MAX);
   
    do
    {
        printf("S1 = ");
        fgets(string1, MAX,stdin);
        
        printf("String after function repl_str = %s\n", repl_str(string1));

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

char *repl_str(char *s1)
{
    //create a pointer to the end of the string. -2 because '\n' and '\0' are the last symbols in the string.
    char * end = s1 + strlen(s1) - 2;
    //create a poinetr to the begining of the string.
    char * start = s1;

while (start < end)
    { 
        char temp;
       //replase contetnts
        temp = *start;
        *start = *end;
        *end = temp;
       
        start++;
        end--;
    }   

return s1;
}