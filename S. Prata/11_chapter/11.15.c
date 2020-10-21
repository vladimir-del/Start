//-------------------------------------------------
//Date: 21.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 15
//-------------------------------------------------

/* 
Text programmming exersice.
15. Use the character classification functions to prepare an implementation of atoi(); 
have this version return the value of 0 if the input string is not a pure number.
*/

#include <stdio.h>
#include <limits.h>

double MyAtoi(char *s);

int main(int argc, char * argv[])
{
    char s[LINE_MAX];
    fgets(s, LINE_MAX, stdin);

    printf("%-10.5f\n", MyAtoi(s));

}

double MyAtoi(char *s)
{
    int res = 0;
    for (int i = 0; s[i] != '\n'; ++i)
    {
        if(s[i] < '0' || s[i] > '9' )
        {
        printf("You input not pure digits\n");
        return 0; 
        }
        res = res * 10 + (s[i] - '0');
    }
    return res;

}