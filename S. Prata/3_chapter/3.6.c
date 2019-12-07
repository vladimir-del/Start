
//-------------------------------------------------
//Date: 24.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 6
//-------------------------------------------------
#include <stdio.h>

int main (void)
{
    int volume;
    double mol = 3e-23;
    int quart = 950;
    
    printf("Enter value volume=");
    scanf("%d", &volume);
    printf("In this volume %e molucels\n", (quart / mol) * volume);
    return 0;
}