//-------------------------------------------------
//Date: 27.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 6
//-------------------------------------------------

#include<stdio.h>
#include<float.h>

int main ()
{

    float num = 1.0 / 3.0;
    double num1 = 1.0 / 3.0;

    printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);

    printf("%.4f\n%.12f\n%.16f\n", num, num, num);
    printf("----------\n");
    printf("%.4f\n%.12f\n%.16f\n", num1, num1, num1);

    return 0;
}