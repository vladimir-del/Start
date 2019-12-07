
//-------------------------------------------------
//Date: 24.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 4
//-------------------------------------------------

#include <stdio.h>

int main (void)
{
    double num;
    printf("Enter value = ");
    scanf("%lf", &num);
    printf("Value = %lf of %e\n", num, num);

    return 0;
}