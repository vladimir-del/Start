//-------------------------------------------------
//Date: 19.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 12
//-------------------------------------------------

/* 
Text programmming exersice.

12. Write a program that reads input up to EOF and reports the number of words, the
number of uppercase letters, the number of lowercase letters, the number of punctuation
characters, and the number of digits. Use the ctype.h family of functions.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>

char * s_gets(char *string, int num);
int NumWords(char *s);
int NumUpLetters();
int NumLowLetters();
int NumPunc();
int NumDig();


int main (int  argc, char *argv[])

{
    char string[LINE_MAX];

    if (fgets(string, LINE_MAX, stdin) && string[0] != '\0')
    {

        NumWords(string);
    }
    
    printf("End programm");
}

char * s_gets(char *string, int num)
{
    char *ret_val;
    ret_val = fgets(string, num, stdin);
    //if (strchr(ret_val, '\0'))
    //break;
    return ret_val;
}

int NumWords(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        int inword = false;
        int word = 0; 

        while (*(s + i) != '\n')
        {
            if (*(s + i) == ' ')
            {
                inword = false;
                continue;
            }
            else if (inword == false)
            {
                inword = true;
                ++word;
            }
        }

        printf("%d", word);
    }
}
