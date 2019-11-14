//-------------------------------------------------
//Date: 14.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 4
// Programming exercise 8
//-------------------------------------------------

#include<stdio.h>

float temperature(double var);

int main(void)
{
    double far;
    int y;
    printf("Enter temperature far > -169.5  or 'q' or any other symbol for exit\n");
    y = scanf("%lf", &far);
    while (y > 0 && far > -169.5)
    {
       temperature(far);
       printf("End calculating, enter again far\n");
       scanf("%lf", &far);
    }

    printf("End programm\n");
    return 0;
}

float temperature (double var)
{
    printf("Temp for far = %.2f\n", var);
    printf("Temp for cel = %.2f\n", 1.8 * var + 32);
    printf("Temp for kel = %.2f\n", 1.8 * var + 32 + 273.16);
}