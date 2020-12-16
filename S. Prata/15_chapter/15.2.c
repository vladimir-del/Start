/*-------------------------------------------------
//Date: 16.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 15
//Programming exercise 2
//-------------------------------------------------
/* 
Text programmming exersice.
2. Write a program that reads two binary strings as command-line arguments and prints
the results of applying the ~ operator to each number and the results of applying the
& , | , and ^ operators to the pair. Show the results as binary strings. (If you don’t have a
command-line environment available, have the program read the strings interactively.)
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>



char * itobs(int n, char * ps);




int main(int argc, char ** argv)
{
    int num1, num2;
    char ch;

    char bin_str[CHAR_BIT * sizeof(int) + 1];
    
    printf("Enter num1 = ");
    scanf("%d", &num1);

    printf("Enter num2 = ");
    scanf("%d", &num2);

    printf("Choises operation\n");
    printf("1 - ~\n2 - &\n3 - |\n4 - ^\nor 'q' for exit");

    while(getchar() != '\n')
    continue;


    while ((ch = getchar()) != 'q')
        {
            
            switch (ch)
            {
            case '1':
                 printf("~num1 = %s\n~num2 = %s\n", itobs(~num1, bin_str), itobs(~num2, bin_str));
                break;

            case '2':
                 printf("num1 & num2 = %s\n", itobs((num1 & num2), bin_str));
                break;

            case '3':
                 printf("num1 | num2 = %s\n", itobs((num1 | num2), bin_str));
                break;

            case '4':
                 printf("num1 ^ num2 = %s\n", itobs((num1 ^ num2), bin_str));
                break;
            
            default:
                break;
            }

        }
        

    return 0;
}


char * itobs(int n, char * ps)
{
int i;
const static int size = CHAR_BIT * sizeof(int);
for (i = size - 1; i >= 0; i--, n >>= 1)
ps[i] = (0x1 & n) + '0';
ps[size] = '\0';
return ps;
}