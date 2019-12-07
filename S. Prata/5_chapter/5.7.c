//-------------------------------------------------
//Date: 14.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 7
//-------------------------------------------------

#include<stdio.h>

float cube (float num);

int main(void)
{
    float num;
    printf("Enter number\n");
    scanf("%f", &num);
    printf("%.2f\n", cube(num));
    return 0;

}

float cube (float num)
{
    return num * num * num;
}