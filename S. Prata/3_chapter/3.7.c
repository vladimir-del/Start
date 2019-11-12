//-------------------------------------------------
//Date: 27.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 7
//-------------------------------------------------

#include<stdio.h>
#define GAL 3.785


int main()
{
const float MILL = 1.609;
float mill;
float gal;

printf("Enter milli = ");
scanf("%f", &mill);
printf("Enter gallon gazoline = ");
scanf("%f", &gal);

float millOnGallon = mill/gal;
float km100onliter = 100/(millOnGallon*(MILL/GAL));

printf("1 gal your drive %.1f milles\n", millOnGallon);
printf("100 km your need %.1f liters\n", km100onliter);

return 0;

}