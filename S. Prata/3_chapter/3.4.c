//-------------------------------------------------
//Date: 27.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 4
//-------------------------------------------------

#include <stdio.h>

int main ()
{
    float wight;
    char name[40];
    printf("Enter your name\n");
    scanf("%s", name);
    printf("Enter your wight in cm\n");
    scanf("%f", &wight);

    printf("%s you wight is %.3f m\n", name, wight/100);
    
    return 0;
}