//-------------------------------------------------
//Date: 21.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 1
//-------------------------------------------------

/* 
Text programmming exersice.
1. Rewrite the program in Listing 12.4 so that it does not use global variables.
*/

#include <stdio.h>

int critic(void);
int main(void)
{
    int units; /* an optional redeclaration */
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
    {
        units = critic();
        printf("You must have looked it up!\n");
    }
    return 0;
}

int  critic(void)
{
    int m;
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &m);
    return m;
}
