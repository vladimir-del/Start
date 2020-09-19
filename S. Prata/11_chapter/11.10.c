//-------------------------------------------------
//Date: 16.08.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 10
//-------------------------------------------------

/* 
Text programmming exersice.

10. Write a function that takes a string as an argument and removes the spaces from the
string. Test it in a program that uses a loop to read lines until you enter an empty line.
The program should apply the function to each input string and display the result.

*/

#include <stdio.h>
#include <string.h>

#define MAX 80

char *delete_space(char *s1);

int main (void)
{
    char str1[MAX];
    char const empty_str[] = {'\n', '\0'}; 

    printf("For emergemcy exit, press CTRL+C\n");
    printf("Please, input string s1, max %d characters\n", MAX);
    printf("For exit program enter an empty string\n");

    do
    {
        printf("S1 = ");
        fgets(str1, MAX, stdin);
        printf("string after function *delete_space = %s", delete_space(str1));

    } while (*str1 == '\0');
        printf("End program. You enter an empty string\n");

    return 0;
}

char *delete_space(char *s1)
{
    char temp[MAX];
    for (int i = 0, k = 0; k < strlen(s1);k++)
    {
        if (*(s1 + k) == ' ')
        {
            continue;
        }        
        *(temp + i) = *(s1 + k);
        i++;
    }
    return s1 = temp;
}