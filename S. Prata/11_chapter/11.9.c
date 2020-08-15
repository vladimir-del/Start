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
        
        printf("String 1 after function repl_str = %s\n", repl_str(string1));
        //printf("Adrees firs element s1 = %p\n", string1);
        //printf("Adrees find element s1 = %p\n", string_in(string1, string2));
        //printf("Press 'E' for exit or 'Enter' to continue\n");

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


    char * end = s1 + strlen(s1) -2 ;
    char * start = s1;
while (start < end)
    { 
        char temp;
       
        temp = *start;
        *start = *end;
        *end = temp;
       
        start++;
        end--;
    }   

return s1;
}