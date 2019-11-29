//-------------------------------------------------
//Date: 28.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 7
//-------------------------------------------------

#include <stdio.h>


int main(void)

{
    double num1, num2;
    printf("Enter two double number\n");
    int tmp = scanf("%lf %lf", &num1, &num2);

    while(tmp == 2)
    {
        double x = (num1 - num2)/(num1 + num2);
        printf("x = %.6f\n", x);
        tmp = scanf("%lf %lf", &num1, &num2);
    }
    return 0; 

}
