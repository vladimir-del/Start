//-------------------------------------------------
//Date: 24.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 7
//-------------------------------------------------

#include <stdio.h>

int main (void)
{
   
int hight;
int cm = 2.54;
   printf("Enter your hight is in duim = ");
   scanf("%d", &hight);
   printf("Your hight in cm = %d\n", hight * cm);
   return 0;
}