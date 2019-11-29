//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 8
//-------------------------------------------------

#include <stdio.h>

double func(double arg1, double arg2);

int main(void)

{
    double num1, num2;
    printf("Enter two double number\n");
    int tmp = scanf("%lf %lf", &num1, &num2);

     while(tmp == 2)
    {
        double x = func(num1, num2);
        printf("x = %.6f\n", x);
        tmp = scanf("%lf %lf", &num1, &num2);
    }
    return 0;
}

double func(double arg1, double arg2)
{
    double arg = (arg1 - arg2)/(arg1 + arg2);
    return arg;
}