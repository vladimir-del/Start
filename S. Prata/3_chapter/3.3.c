//-------------------------------------------------
//Date: 27.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 3
//-------------------------------------------------


#include <stdio.h>


int main ()
{
    float num, num1;
    scanf ("%f", &num);

    printf("%.1f or %.1e\n", num, num);

    scanf ("%f", &num1);
    printf("%.3f or %.3e\n", num1, num1);
    return 0;
}
