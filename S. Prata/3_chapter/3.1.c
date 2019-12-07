//-------------------------------------------------
//Date: 24.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 1
//-------------------------------------------------

#include <stdio.h>
#include <math.h>

int main   (void)
{
//First. Need take size short int and etc...

size_t sizeShortInt, sizeInt, sizeLongInt, sizeLongLongInt;

sizeShortInt = sizeof(short int);
sizeInt = sizeof(int);
sizeLongInt = sizeof(long int);
sizeLongLongInt = sizeof(long long int);

printf("size short int = \t%ld bytes\n", sizeShortInt);
printf("size int = \t\t%ld bytes\n", sizeInt);
printf("size long int = \t%ld bytes\n", sizeLongInt);
printf("size long long int = \t%ld bytes\n", sizeLongLongInt);

printf ("\n");
//Now Find max value for current type.
int maxShortInt = (pow (2, (sizeShortInt * 8))/2);
long int maxInt = (pow (2, (sizeInt * 8)))/2;
long int maxLongInt = (pow (2, (sizeLongInt * 8)))/2;
unsigned long long int maxLongLongInt = pow (2, (sizeLongLongInt * 8));


printf("Max value Short int = %d\n", maxShortInt);
printf("Max value int = %ld\n", maxInt);
printf("Max value long int = %lu\n", maxLongInt);
printf("Max value long int + 1 = %lu\n", maxLongInt + 1);
printf("Max value usigned long long int - 1 = %llu\n", maxLongLongInt - 1);
printf("Max value usigned long long int + 1 = %llu\n", maxLongLongInt + 1);


// float type problem

int numInt = 5;
float numFloat = 1.999999;
float numDouble = 1.99999999;

float rezFloat = numInt - numFloat;
int rezInt = numInt - numFloat;
printf("\nfloat rez .6f  = %.6f\n", rezFloat); /* True*/
printf("float rez auto f = %f\n", rezFloat); /* True*/
printf("float rez .4 = %.4f\n", rezFloat); /* No*/

float rezFloat1 = numInt - numDouble;

printf("float rez auto f = %f\n", rezFloat1); /* True*/
return 0;
}