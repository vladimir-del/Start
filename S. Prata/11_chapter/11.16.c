//-------------------------------------------------
//Date: 21.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 16
//-------------------------------------------------

/* 
Text programmming exersice.
16. Write a program that reads input until end-of-file and echoes it to the display. Have the
program recognize and implement the following command-line arguments:
-p Print input as is
-u Map input to all uppercase
-l Map input to all lowercase
Also, if there are no command-line arguments, let the program behave as if the –p
argument had been used.
*/

#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    char s[LINE_MAX];
    fgets(s, LINE_MAX, stdin);
    printf("%s", argv[1] + 1);

    switch (*(argv[1] + 1))
    {
    case 'p':
        printf("-p %s", s);
        break;
    case 'u':
        printf("-u %s", s);
        break;
    case 'l':
        printf("-l %s", s);
        break;
    
    default:
    puts("Error"); return 0;
    }
}