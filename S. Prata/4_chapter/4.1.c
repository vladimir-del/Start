//-------------------------------------------------
//Date: 24.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 4
// Programming exercise 1
//-------------------------------------------------


#include <stdio.h>

int main ()
{
    char name[40];
    char surmane[40];


    printf("Input your name\n");
    scanf("%s", name);
    printf("Input your surname\n");
    scanf("%s", surmane);

printf ("Your surname %s, and your name %s\n", surmane, name);
return 0;

}