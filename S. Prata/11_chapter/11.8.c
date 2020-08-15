//-------------------------------------------------
//Date: 15.08.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 8
//-------------------------------------------------

/* 
Text programmming exersice.

8. Write a function called string_in() that takes two string pointers as arguments. If
the second string is contained in the first string, have the function return the address
at which the contained string begins. For instance, string_in("hats", "at") would
return the address of the a in hats . Otherwise, have the function return the null pointer.
Test the function in a complete program that uses a loop to provide input values for
feeding to the function.

*/

#include <stdio.h>
#include <string.h>

#define MAX 80

char *string_in(char *s1, char *s2);
char one_char();

int main (void) 
{
    char string1[MAX], string2[MAX];

    printf("For emergemcy exit, press CTRL+C\n");
    printf("Please, input string s1 and s2 for search in s1,\n"
    "S1 and s2 max %d characters\n"
    "S1 must always be more then s2\n", MAX);
   
    do
    {
        printf("S1 = ");
        fgets(string1, MAX,stdin);
        
        printf("S2 = ");
        fgets(string2, MAX,stdin);
        
        printf("String 1 = %s\n", string_in(string1, string2));
        printf("Adrees firs element s1 = %p\n", string1);
        printf("Adrees find element s1 = %p\n", string_in(string1, string2));
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

char *string_in(char *s1, char *s2)
{
    int i = 0, k=0, l=0;
    char *adress;

    //counter for s1
    for (i = 0; *s1 != '\n'; i++)
    {
        //search condition s2 in s1
        for (l = 0, k = i; * (s2 + l) != '\n' && * (s1 + k) == * (s2 + l); k++, l++)
        ;

        //stop. when all charcters in s2 are found in s1
        if ( * (s2 + l) == '\n' && k > 0)
        {
            adress = (s1 + i);
            break;
        }

    }
    return adress;
}